// -----------------Method-1
#include<stdio.h>
void main(){
  int num1,num2,con;
  printf("Enter the value of num1 &num2 : ");
  scanf("%d%d",&num1,&num2);
  con=num1;
  num1=num2;
  num2=num1;
  printf("Value of num1 = %d num2 = %d ",num1,num2);
}

// -----------------Method-2
#include<stdio.h>
void main(){
  int num1,num2;
  printf("Enter the value of num1 &num2 : ");
  scanf("%d%d",&num1,&num2);
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  printf("Value of num1 = %d num2 = %d ",num1,num2);
}

// -----------------Method-3
#include<stdio.h>
void main(){
  int num1,num2,con;
  printf("Enter the value of num1 &num2 : ");
  scanf("%d%d",&num1,&num2);
  num1=num1+num2-(num2=num1);
  printf("Value of num1 = %d num2 = %d ",num1,num2);
}
