#include<stdio.h>
void main(){
  int a[5]={3,78,66,40,90},i;
  for(i=0;i<5;i++){
    printf("%d\n",*(a+i));
  }
}
