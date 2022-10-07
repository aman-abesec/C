#include<stdio.h>
void main(){
  int num,i;
  printf("Enter the number : ");
  scanf("%d",&num);
  for(i=num;i>=1;i--){
    printf("%d\t",i);
  }
}
