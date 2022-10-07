//--------------------------------Method-1
#include<stdio.h>
void main(){
  int num,*n;
  n=&num;
  printf("Enter a number : ");
  scanf("%d",&num);
  printf("Number = %d",*n);
}

//-------------------------------------Method-2
#include<stdio.h>
void main(){
  int num,*n;
  n=&num;
  printf("Enter a number : ");
  scanf("%d",n);
  printf("Number = %d",*n);
}
