#include<stdio.h>
void main(){
  int num,*c,i;
  c=&num;
  printf("Enter the number : ");
  scanf("%d",c);
  for(i=1;i<=10;i++){
    printf("%d * %d = %d\n",*c,i,*c*i);
  }
}
