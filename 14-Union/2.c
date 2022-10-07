//-----------------------------------------------------
//                      PRACTISE PROBLEM
//-------------------------------------------------------
//--------------------------------Q.1
//WAP a program in c to create a database of a emplype with input name,employe id,salary,using,union.
union employe
{
  char name[100];
  char id[100];
  float s;
}e[50];
main(){
  int i,l;
  printf("Enter the no of employe : ");
  scanf("%d",&l);
  printf("Enter the name id and salary : ");
  for(i=0;i<l;i++){
    scanf("%s%s%f",&e[i].name,&e[i].id,&e[i].s);
  }
  for(i=0;i<l;i++){
    printf("%s\t%s\t%f\n",e[i].name,e[i].id,e[i].s);
  }
}
