/*
  * Kirk Fay
  * This program is used to display forking and creation of processes
  * using C
*/

#include <stdio.h>
#include <unistd.h>
int main (int argc, char *argv[])
{
   fork();
   fork();
   fork();
   printf ("Hello World! My pid = %d and My parent pid = %d\n",
                         getpid(), getppid());
   return 0;
}
