//-------------Method 1
#include <stdio.h>
void main(){
  int num1,num2,num3;
  printf("Enter three number : ");
  scanf("%d%d%d",&num1,&num2,&num3);
  if(num1>num2 && num1>num3)
    printf("Greatest number = %d",num1);
  if(num2>num1 && num2>num3)
      printf("Greatest number = %d",num2);
  if(num3>num1 && num3>num2)
      printf("Greatest number = %d",num3);
}

//-------------Method 2
#include <stdio.h>
void main(){
  int num1,num2,num3;
  printf("Enter three number : ");
  scanf("%d%d%d",&num1,&num2,&num3);
  if(num1>num2 && num1>num3)
    printf("Greatest number = %d",num1);
  else if(num2>num1 && num2>num3)
      printf("Greatest number = %d",num2);
  else
      printf("Greatest number = %d",num3);
}

//-------------Method 3
#include <stdio.h>
void main(){
  int num1,num2,num3;
  printf("Enter three number : ");
  scanf("%d%d%d",&num1,&num2,&num3);
  if(num1>num2 && num1>num3)
    printf("Greatest number = %d",num1);
  else{
    if(num2>num3)
      printf("Greatest number = %d",num2);
    else
      printf("Greatest number = %d",num3);
  }
}
