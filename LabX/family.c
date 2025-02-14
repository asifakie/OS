#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

 int main(){
  FILE*file=fopen("pids.txt","a");
   
   if(!file){
    perror("File open failed!");
    return 1;
    }
    pid_t pid=fork();
   
   if(pid<0){
    perror("Fork failed!");
    exit(1);
    }
    else{
    fprintf(filepc,"Process PID: %d, Parent PID:%d\n",getpid(),getppid());
    fclose(filepc);
    }
  return 0;
}
