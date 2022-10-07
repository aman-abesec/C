#include<stdio.h>
void main(){
  int num,sum=0;
  printf("Enter a number : ");
  scanf("%d",&num);
  while(num!=0){
    sum=sum+(num%10);
    num=num/10;
  }
  printf("Sum of digit = %d",sum);
}
