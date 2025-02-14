#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  for(int i=0; i<3; i++){
      pid_t pid=fork();
       if(pid<0){
         perror("Fork failed!");
         exit(1);
         }
      printf("Process PID %d, Parent PID: %d\n",getpid(),getpid());
      if(pid==0)
        break;
      }
  return 0;
}
