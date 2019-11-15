/*
   * Kirk Fay
   * Program to illustrate UNIX system calls
   * fork, exec, wait, getpid, and getppid
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
   pid_t childpid, mypid;

   mypid = getpid();
   printf("Hi! I am a process about to fork\n");
   printf("My pid is %d\n", mypid);
   printf("I will proceed when you press Enter key\n");
   getchar();

   childpid = fork();

   if (childpid == -1) {
      printf("Error in fork; program terminated\n");
      exit (-1);
   }

   if (childpid == 0) {
      /* This code is exceuted only be the child */
      execlp("./displayPID", "displayPID", (char *) NULL);
   }
   else {
      /* This code is executed only by the parent */
      int status;
      /* Wait for the child to terminate */
      wait(&status);
      mypid = getpid();
      printf("Hi! I am the parent process after fork\n");
      printf("My pid is %d\n", mypid);
      printf("My child had pid %d\n", childpid);
   }
   return 0;
}
