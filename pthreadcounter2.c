/*
 * Kirk Fay
 * This program illustrates multithreading
*/


#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>


pthread_t tid[2];
int counter;
int flag0;
int flag1;
int turn;
void* trythis0(void *arg)
{
  while(flag0 && turn){
    unsigned long i = 0;
    counter += 1;
    printf("\n Job %d has started\n", counter);
    printf("Turn is: [%d]\n",turn);

    for(i=0; i<(0xF);i++)
    sleep(1);
    printf("\n Job %d has finished\n", counter);
    flag0 = 0;
    counter +=1;

    return NULL;
}
}
void* trythis1(void *arg)
{
  while(flag1 && turn){
    unsigned long i = 0;
    counter += 1;
    printf("\n Job %d has started\n", counter);
    printf("Turn is: [%d]\n",turn);



    for(i=0; i<(0xF);i++)
    sleep(1);
    printf("\n Job %d has finished\n", counter);
    flag1 = 0;
counter += 1;

    return NULL;
  }
}

int main()
{
    int i = 0;
    int error;
    int error2;
    flag0 = 1;
    flag1 = 1;
    turn = 1;
    while(i < 2)
    {
        error = pthread_create(&tid[i], NULL, trythis0, (void *)&tid);
          printf("flag0 is: [%d]", flag0);

        error2 = pthread_create(&tid[i], NULL, trythis1, (void *)&tid);
        printf("flag1 is: [%d]", flag1);
        if (error != 0)
            printf("\nThread can't be created : [%s]", strerror(error));
        if (error2 != 0)
            printf("\nThread can't be created : [%s]", strerror(error));
        i++;
    }

    pthread_join(tid[0], NULL);
    pthread_join(tid[1], NULL);

    return 0;
}
