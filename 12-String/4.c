//-----------------------------------------------------
//                      String Handling Function
//-------------------------------------------------------
strlen():To calculate length of string including \0 .
        SYNTAX:strlen(string-name);

strcpy():To copy one string into another string.
        SYNTAX:strcpy(string1,string2);

strrev():To reverse a string.
        SYNTAX:strrev(string-name);

strcat(): To concatenate two string.
        SYNTAX:strcat(string1,string2);

strcmp():To compare two string.
        SYNTAX:strcmp(string1,string2);

// -------------------Q.1
main(){
  char a[10]=("Welcome in c");
  int l;
  l=strlen(a);
  printf("Length of string = %d",l);
}

// ------------------------Q.2
main(){
  char a[15]=("Welcome in c");
  char b[15];
  strcpy(b,a);
  printf("%s , %s",a,b);
}

// ------------------------Q.3
main(){
  char a[15]=("hello");
  strrev(a);
  printf("%s",a);
}

// ------------------------Q.4
main(){
  char a[15]=("Welcome");
  char b[15]=(" in c");
  strcat(a,b);
  printf("%s",a);
}

// ------------------------Q.5
main(){
  char a[15]=("Welcome");
  char b[15]=("welcome");
  int s;
  s=strcmp(a,b);
  printf("%d",s);
}
