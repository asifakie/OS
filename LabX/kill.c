#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

 void signal_handler(int sig){
   printf("Child received signal %d from parent\n",sig);
  }
 int main(){
   pid_t pid=fork();
    
   if(pid<0){
     perror("Fork failed");
     exit(1);
    }
   else if(pid==0){
    signal(SIGUR1,signal_handler);
    pause();
    }
   else {
    sleep(1);
    kill(pid,SIGUR1);
   }
 return 0;
} 
