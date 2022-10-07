// //---------------------------Method-1
#include<stdio.h>
void sum(int *a ,int *b){
  printf("Sum = %d",*a+*b);
}
void main(){
  int a=10,b=60;
  sum(&a,&b);
}

//---------------------------Method-2
#include<stdio.h>
void sum(int *a ,int *b){
  int s,*z=&s;
  *z=*a+*b;
  printf("%d",s);
}
void main(){
  int a=10,b=60;
  sum(&a,&b);
}
