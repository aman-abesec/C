#include<stdio.h>
void main(){
  int num,sum=0;
  printf("Enter a number : ");
  scanf("%d",&num);
  do{
    sum=sum+(num%10);
    num=num/10;
  }while(num!=0);
  printf("Sum of digit = %d",sum);
}
