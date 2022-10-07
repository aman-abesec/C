#include<stdio.h>
void main(){
  int num,count,i,j;
  printf("Enter the number : ");
  scanf("%d",&num);
  for(j=1;j<=num;j++){
    count=1;
    for(i=2;i<j;i++){
      if(j%i==0){
        count+=1;
        break;
      }
    }
    if(count==1)
      printf("%d\t",j);
  }
}
