//-----------------------------------------------------
//                      Example
//-------------------------------------------------------

// ----------------------------------------Q.1
//WAP in c to create a database for a student
struct student
{
  char name[200];
  int r;
  float n;
}s;
main(){
  printf("Enter name roll_no and number of student : ");
  scanf("%s%f%d",&s.name,&s.n,&s.r);
  printf("%s\t%f\t%d",s.name,s.n,s.r);
}
