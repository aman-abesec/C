//--------------Method-1
#include <stdio.h>
void main(){
  int num1,num2;
  printf("Enter two number : ");
  scanf("%d%d",&num1,&num2);
  if(num1>num2)
    printf("Greatest number = %d",num1);
  if(num1<num2)
    printf("Greatest number = %d",num2);
  if(num1==num2)
    printf("Both are equal");
}

//--------------Method-2
#include <stdio.h>
void main(){
  int num1,num2;
  printf("Enter two number : ");
  scanf("%d%d",&num1,&num2);
  if(num1>num2)
    printf("Greatest number = %d",num1);
  else if(num1<num2)
    printf("Greatest number = %d",num2);
  else
    printf("Both are equal");
}
