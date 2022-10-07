//-----------------------------------------------------
//                      NO ARGUMENT WITH RETURN TYPE
//-------------------------------------------------------
//--------------------Q.1
#include<stdio.h>
int sum(); //function decleration
void main(){
  int d;
  d=sum(); //function calling
  printf("Sum=%d",d);
}
//function defination
int sum(){
  int a,b,c;
  printf("Enter the two number : ");
  scanf("%d%d",&a,&b);
  c=a+b;
  return c;
}
