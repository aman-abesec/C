#include<stdio.h>
void main(){
  int p,r,t;
  printf("Enter the value of amount rate time : ");
  scanf("%d%d%d",&p,&r,&t);
  printf("Simple Interest = %d",(p*r*t)/100);
}
