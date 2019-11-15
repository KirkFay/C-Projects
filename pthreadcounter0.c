/*
 * Kirk Fay
 * This program shows how a thread may need to wait for another once
 * during multithreading scenarios
*/
#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include <signal.h>
pthread_t tid[2];
int counter;

void* trythis(void *arg)
{
    unsigned long i = 0;
    counter += 1;
    printf("\n Job %d has started\n", counter);

    for(i=0; i<(0xF);i++)
    sleep(1);
    //printf("\n Job %d has finished\n", counter);

    return NULL;
}

void hello(){
  printf("Hello world! Bye Bye world! \n");
}

int main(void)
{
    int i = 0;
    int error;

    while(i < 2)
    {
        error = pthread_create(&(tid[i]), NULL, &trythis, NULL);
        signal(SIGUSR1, hello);
        if (error != 0)
            printf("\nThread can't be created : [%s]", strerror(error));
        i++;
    }
    sleep(5);
    pthread_kill(tid[0], SIGUSR1);
    pthread_kill(tid[1], SIGUSR1);

    pthread_join(tid[0], NULL);
    pthread_join(tid[1], NULL);

    return 0;
}
