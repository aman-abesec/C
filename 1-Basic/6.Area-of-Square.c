//--------------Method-1
#include<stdio.h>
void main(){
  int side;
  printf("Enter the side of square : ");
  scanf("%d",&side);
  printf("Area of Square = %d",side*side);
}

//-----------------Method-2
#include<stdio.h>
#include<math.h>
void main(){
  float side;
  printf("Enter the side of square : ");
  scanf("%f",&side);
  printf("Area of Square = %f",pow(side,2));
}
