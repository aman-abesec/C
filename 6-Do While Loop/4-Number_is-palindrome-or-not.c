#include<stdio.h>
void main(){
  int num,rem=0,store;
  printf("Enter a number : ");
  scanf("%d",&num);
  store=num;
  do{
    rem=rem*10+(num%10);
    num=num/10;
  }while(num!=0);
  if(rem==store)
    printf("Number is palindrome");
  else
    printf("Number is't palindrome");
}
