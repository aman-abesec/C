#include<stdio.h>
void main(){
  int num,i=1;
  printf("Enter a number : ");
  scanf("%d",&num);
  do{
    printf("%d * %d = %d\n",num,i,num*i);
    i++;
  }while(i<=10);
}
