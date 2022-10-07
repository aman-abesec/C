#include<stdio.h>
void main(){
  int base,pow,i,mul=1;
  printf("Enter the base & power : ");
  scanf("%d%d",&base,&pow);
  for(i=1;i<=pow;i++){
      mul=mul*base;
  }
  printf("%d\t",mul);
}
