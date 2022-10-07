#include<stdio.h>
void main(){
  char chr;
  printf("Enter Character : ");
  scanf("%c",&chr);
  if(chr=='a' || chr=='e'|| chr=='i'|| chr=='o'|| chr=='u'|| chr=='A'|| chr=='E'|| chr=='I'|| chr=='O'|| chr=='U')
    printf("Vowel");
  else
    printf("Consonent");
}
