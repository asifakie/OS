#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
 int main(){
  int fd[2];
  pipe(fd);
  pip_t pid=fork();
  
  if(pid<0){
    perror=("Fork failed");
    exit(1);
    }
  else if(pid==0){
    close(fd[1]);
    char message[100];
    read(fd[0],message,sizeof(message));
    printf("Child received %s\n",message);
    close(fd[0]);
   }
   else{
    close(fd[0]);
    char message[]="Hello from parent!"
    write(fd[1],message,sizeof(message));
    close(fd[1]);
   }
 return 0;
}


