/*
  * Kirk Fay
  * This program is used to illustrate how to execute bash commands within C
*/

#include <stdio.h>
#include <unistd.h>
int main (int argc, char *argv[])
{
   printf ("This will execute ls command\n");
   printf ("Press Enter key to proceed\n");
   getchar();
   execlp ("/bin/ls", "ls", "-l",  (char *) NULL);
   printf ("Successful completion of ls\n");
   return 0;
}
