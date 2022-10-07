#include<stdio.h>
void main(){
  int a[10],i,len,sum=0;
  printf("Enter the length of array max size is 10 : ");
  scanf("%d",&len);
  for(i=0;i<len;i++){
      printf("Enter %d element : ",i+1);
      scanf("%d",&a[i]);
      }
  for(i=0;i<len;i++){
      sum+=a[i];
      }
  printf("Sum of Array = %d",sum);
}
