#include<stdio.h>
void main(){
  int num1,num2,hcf=1,i;
  printf("Enter two number : ");
  scanf("%d%d",&num1,&num2);
  for(i=1;i<=num1;i++){
    if(num1%i==0 && num2%i==0){
      hcf=i;
    }
  }
  printf("HCF of %d and %d = %d",num1,num2,hcf);
}
