#include<stdio.h>
void main(){
  int num1,num2,i;
  printf("Enter two number : ");
  scanf("%d%d",&num1,&num2);
  for(i=1;;i++){
    if(i%num1==0 && i%num2==0){
      printf("LCM of %d and %d = %d",num1,num2,i);
      break;
    }
  }
}
