#include<stdio.h>
void main(){
  int num,rem=0;
  printf("Enter a number : ");
  scanf("%d",&num);
  do{
    rem=rem*10+(num%10);
    num=num/10;
  }while(num!=0);
  printf("Reverse of is %d",rem);
}
