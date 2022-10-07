#include<stdio.h>
void main(){
  char chr;
  printf("Enter Character : ");
  scanf("%c",&chr);
  if(chr>='a' && chr<='z' || chr>='A' && chr<='Z')
    printf("Alphabet");
  else if(chr>='0' && chr<='9')
    printf("Number");
  else if(chr==32)
    printf("Space");
  else
    printf("Special Character");
}
