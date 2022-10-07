#include<stdio.h>
void main(){
  int a[10],i,len,max;
  printf("Enter the length of array max size is 10 : ");
  scanf("%d",&len);
  for(i=0;i<len;i++){
      printf("Enter %d element : ",i+1);
      scanf("%d",&a[i]);
      }
  max=a[0];
  for(i=0;i<len;i++){
      if(a[i]>max)
        max=a[i];
      }
  printf("Max value in array = %d",max);
}
