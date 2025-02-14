#include <stdio.h>

 void add(int *a,int *b,int *c,int *result){
   *result=*a+*b+*c;
  }
  int main(){
    int x=2,y=4,z=8,sum;
    add(&x,&y,&z,&sum);
    printf("Sum:%d\n");
   return 0;
 }
