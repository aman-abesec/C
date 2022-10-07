#include<stdio.h>
void main(){
  int num,count=0;
  printf("Enter a number : ");
  scanf("%d",&num);
  do{
    count++;
    num=num/10;
  }while(num!=0);
  printf("Number of digit =  %d",count);
}
