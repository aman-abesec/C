#include<stdio.h>
void main(){
  int num,count=0;
  printf("Enter a number : ");
  scanf("%d",&num);
  while(num!=0){
    count++;
    num=num/10;
  }
  printf("Number of digit =  %d",count);
}
