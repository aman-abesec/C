#include<stdio.h>
void main(){
  float per;
  printf("Enter your percentage : ");
  scanf("%f",&per);
  if(per<=33)
    printf("Fail");
  else if(per>33 && per<=45)
    printf("Third");
  else if(per>45 && per<=65)
    printf("Second");
  else if(per>65)
    printf("First");
}
