//-----------------------------------------------------
//                      Problem
//-------------------------------------------------------

// -----------------------------------------Q.1
//Wap to find out maximum marks in a class with name rolll no.
struct student{
  int r;
  char name[200];
  float m;
}s[50];
main(){
  int i,l,t,max;
  printf("Enter the total student : ");
  scanf("%d",&t);
  printf("Enter the roll_no name marks\n");
  for(i=0;i<t;i++){
    scanf("%d%s%f",&s[i].r,&s[i].name,&s[i].m);
  }
  max=s[0].m;
  for(i=0;i<t;i++){
    if(max<s[i].m){
      max=s[i].m;
      l=i;
    }
    for(i=0;i<t;i++){
      printf("%d\t%s\t%f\n",s[i].r,s[i].name,s[i].m);
    }
    printf("Max marks is\n");
    printf("%d\t%s\t%f\n",s[l].r,s[l].name,s[l].m);
  }
}

// -----------------------------------------Q.2
//Wap in c to find the avg marks of class of 50 student;
struct student{
  int r;
  char name[200];
  float m;
}s[50];
main(){
  int sum=0,i;
  printf("Enter the roll_no name marks\n");
  for(i=0;i<50;i++){
    scanf("%d%s%f",&s[i].r,&s[i].name,&s[i].m);
  }
  for(i=0;i<50;i++){
    sum=sum+s[i].m;
  }
  printf("Avg marks = %d",(sum/50));
}
