#include<stdio.h>
void main(){
  int a[10],i,len;
  printf("Enter the length of array max size is 10 : ");
  scanf("%d",&len);
  for(i=0;i<len;i++){
      printf("Enter %d element : ",i+1);
      scanf("%d",&a[i]);
      }
  printf("Even number are.....\n");
  for(i=0;i<len;i++){
      if(a[i]%2==0)
        printf("%d ",a[i]);
      }
}
