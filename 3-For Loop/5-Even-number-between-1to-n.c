// ---------------Method-1
#include<stdio.h>
void main(){
  int num,i;
  printf("Enter the number : ");
  scanf("%d",&num);
  for(i=2;i<=num;i+=2){
    printf("%d\t",i);
  }
}

// ---------------Method-2
#include<stdio.h>
void main(){
  int num,i;
  printf("Enter the number : ");
  scanf("%d",&num);
  for(i=1;i<=num;i++){
    if(i%2==0)
      printf("%d\t",i);
  }
}
