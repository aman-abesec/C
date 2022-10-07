#include<stdio.h>
void main(){
  int num1,num2;
  char operator;
  printf("Enter two number : ");
  scanf("%d%d",&num1,&num2);
  printf("Enter a character [* / + -]: ");fflush(stdin);
  scanf("%c",&operator);
  switch (operator) {
    case '+':
      printf("Add = %d",num1+num2);
      break;
    case '-':
      printf("Sub = %d",num1-num2);
      break;
    case '*':
      printf("Mul = %d",num1*num2);
      break;
    case '/':
      printf("Div = %d",num1/num2);
      break;
    default:
      printf("Invalid Choice");
  }
}
