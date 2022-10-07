//-----------------------------------------------------
//                      WITH ARGUMENT NO RETURN TYPE
//-------------------------------------------------------
// --------------------Q.1
#include<stdio.h>
void sum(int a,int b); //function decleration
void main(){
  int a,b;
  printf("Enter the two number : ");
  scanf("%d%d",&a,&b);
  sum(a,b); //function calling
}
//function defination
void sum(int a,int b){
  int c;
  c=a+b;
  printf("Sum=%d",c);
}
