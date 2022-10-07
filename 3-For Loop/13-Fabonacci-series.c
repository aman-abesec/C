#include<stdio.h>
void main(){
  int a=0,b=1,c=0,i,num;
  printf("Enter the Number : ");
  scanf("%d",&num);
  for(i=0;i<num;i++){
    printf("%d\t",c);
    a=b;
    b=c;
    c=a+b;
  }
}
