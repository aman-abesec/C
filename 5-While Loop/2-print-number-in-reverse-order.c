#include<stdio.h>
void main(){
  int num,rem=0;
  printf("Enter a number : ");
  scanf("%d",&num);
  while(num!=0){
    rem=rem*10+(num%10);
    num=num/10;
  }
  printf("Reverse of is %d",rem);
}
