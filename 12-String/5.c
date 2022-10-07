//-----------------------------------------------------
//                      Practise Program
//-------------------------------------------------------
// ---------------------Q.1
//Enter string is palindrome or not
main(){
  char a[100],b[100];
  int i;
  printf("Enter the string : ");
  gets(a);
  strcpy(b,a);
  strrev(a);
  if(strcmp(a,b)==0){
    printf("Enter string is Palindrome");
  }
  else{
    printf("Enter string is not Palindrome");
  }
}

// ------------------------------Q.2
//Calculate Length of string without using string handling function
main(){
  char a[100];
  int i,l=0;
  printf("Enter the string : ");
  gets(a);
  for(i=0;a[i]!='\0';i++){
    l++;
  }
  printf("Length of string = %d,%d",l,strlen(a));
}

// ------------------------------------Q.3
//Reverse a string without using string handling function
main(){
  char a[100],b[100];
  int i,l;
  printf("Enter the size of string : ");
  scanf("%d",&l);
  for(i=0;i<l;i++){
    scanf("%s",&a[i]);
  }
  for(i=0;i<l;i++){
    b[i]=a[l-i-1];
  }
  printf("%s,%s",a,b);
}

// ------------------------------------Q.4
//Copy one string in another string without using file handling function
main(){
  char a[10],b[10];
  int i,l=0;
  printf("Enter the string : ");
  gets(a);
  for(i=0;a[i]!='\0';i++){
    l++;
  }
  for(i=0;i<=l;i++){
    b[i]=a[l-i-1];
  }
  puts(b);
}

// -------------------------------------------Q.5
//WAP in c to compare two string without using file handling function
main(){
  char a[200],b[200];
  int al=0,bl=0,i,l=0;
  printf("Enter the first String : ");
  gets(a);
  printf("Enter the second string : ");
  gets(b);
  for(i=0;a[i]!='\0';i++){
    al++;
  }
  for(i=0;b[i]!='\0';i++){
    bl++;
  }
  if(al==bl){
    for(i=0;i<bl;i++){
      if(a[i]==b[i]){
        l++;
      }
    }
    if(al==l){
      printf("String are same");
    }
    else{
      printf("String are not same");
    }
  }
  else{
    printf("String are not Same");
  }
}
