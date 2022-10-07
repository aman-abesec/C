//-----------------------------------------------------
//                      NO ARGUMENT NO RETURN TYPE
//-------------------------------------------------------
// -----------------------Q.1
#include<stdio.h>
void sum(); //function decleration
void main(){
  sum(); //functio calling
}
// function defination
void sum(){
  int a,b,c;
  printf("Enter two number");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("Sum=%d",c);
}
