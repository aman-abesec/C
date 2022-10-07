#include<stdio.h>
void main(){
  int array1[6]={5,56,96,544,5,46};
  int array2[6]={1,2,3,4,5,6},sum[6],i;
  for(i=0;i<6;i++){
    sum[i]=array1[i]+array2[i];
  }
  printf("Sum of 1d Array...\n");
  for(i=0;i<6;i++){
    printf("%d ",sum[i]);
  }
}
