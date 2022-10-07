#include<stdio.h>
void main(){
  int num,count=1,i;
  printf("Enter the number : ");
  scanf("%d",&num);
  for(i=2;i<num;i++){
    if(num%i==0){
      count+=1;
      break;
    }
  }
  if(count==1)
    printf("Prime");
  else
    printf("Non Prime");
}
