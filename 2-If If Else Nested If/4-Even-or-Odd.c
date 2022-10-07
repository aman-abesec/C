// -----------------Method-1
#include<stdio.h>
void main(){
  int number;
  printf("Enter Number : ");
  scanf("%d",&number);
  if(number%2==0)
    printf("Number is even");
  else
    printf("Number is odd");
}

// -----------------Method-2
#include<stdio.h>
void main(){
  int number;
  printf("Enter Number : ");
  scanf("%d",&number);
  if(!(number&1))
    printf("Number is even");
  else
    printf("Number is odd");
}
