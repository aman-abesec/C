//-----------------------------------------------------
//                      WITH ARGUMENT WITH RETURN TYPE
//-------------------------------------------------------
//--------------------Q.1
#include<stdio.h>
int sum(int a,int b); //function decleration
void main(){
  int a,b,c;
  printf("Enter the two number : ");
  scanf("%d%d",&a,&b);
  c=sum(a,b); //function calling
  printf("Sum=%d",c);
}
//function defination
int sum(int a,int b){
  int c;
  c=a+b;
  return c;
}
