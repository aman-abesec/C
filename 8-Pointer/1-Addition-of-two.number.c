//---------------------------Method-1
#include<stdio.h>
void main(){
  int sum,num1=20,num2=30;
  int *a,*b,*c;
  a=&num1;
  b=&num2;
  c=&sum;
  sum=num1+num2;
  printf("%d",*c);
}

//------------------------------Method-2
#include<stdio.h>
void main(){
  int sum,num1=20,num2=30;
  int *a,*b,*c;
  a=&num1;
  b=&num2;
  c=&sum;
  *c=*a+*b;
  printf("%d",sum);
}
