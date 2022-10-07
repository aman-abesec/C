#include<stdio.h>
void main(){
  int number;
  printf("Enter Number : ");
  scanf("%d",&number);
  if(number>0)
    printf("Number is poistive");
  else if(number<0)
    printf("Number is negative");
  else
    printf("Number is zero");
}
