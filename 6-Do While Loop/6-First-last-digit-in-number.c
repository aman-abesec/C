#include<stdio.h>
void main(){
  int num,fdigit,ldigit;
  printf("Enter a number : ");
  scanf("%d",&num);
  ldigit=num%10;
  do{
    fdigit=num%10;
    num=num/10;
  }while(num!=0);
  printf("First digit %d last digit %d",fdigit,ldigit);
}
