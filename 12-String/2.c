//-----------------------------------------------------
//                      INPUT OUTPUT
//-------------------------------------------------------

// ---------------Q.1
int main(){
  char str1[]=("hello");
  printf("%s",str1);
}

// -----------------Q.2
int main(){
  char str1[10];
  int i,n;
  printf("Enter the Array range max 10 : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%s",&str1[i]);
  }
  for(i=1;i<=n;i++){
  printf("%c",str1[i]);
  }
}

// ------------------Q.3
int main(){
  char str1[10];
  printf("Enter the string : ");
  scanf("%s",&str1);
  printf("%s",str1);
}
