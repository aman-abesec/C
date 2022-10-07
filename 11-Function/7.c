//-----------------------------------------------------
//                      CALL BY VALUE ,CALL BY REFERENCE
//-------------------------------------------------------
CALL BY VALUE:
=>Function is called by the value.
=>The change in the formal parameter does not reflect back in actual parameter.

CALL BY REFERENCE:
=>Function called  by the reference or addres of variable.
=>The change in the formal parameterc reflect in the actual parameter.

// ---------------------------------Q.1
//CALL BY VALUE
#include<stdio.h>
void swap(int a,int b);//Function decleration
void main(){
  int a,b;
  printf("Enter two number : ");
  scanf("%d%d",&a,&b);
  swap(a,b);//function calling values,these are called actual parameter (Call By value)
}
//function defination
void swap(int a,int b)//formal argument
{
  b=a+b-(a=b);
  printf("%d %d",a,b);
}

// -------------------------------------Q.2
//CALL BY REFERENCE
#include<stdio.h>
void swap(int *a,int *b);//Function decleration
void main(){
  int a,b;
  printf("Enter two number : ");
  scanf("%d%d",&a,&b);
  swap(&a,&b);//function calling with the addres of variabe
}
//function defination
void swap(int *a,int *b)//formal argument
{
  *b=*a+*b-(*a=*b);
  printf("%d %d",*a,*b);
}
