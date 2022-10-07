//-----------------------------------------------------
//                      BASIC
//-------------------------------------------------------
UNION:It takes less memory
      Union there is a chance of data loss.

UNION TEMPLATE :
                union student
                {
                  char name[10];
                  int r;
                }s;

-----------------------------Q.1
//Example
union student
{
  int r;
  float m;
}s;
main(){
  printf("Enter the roll no and marks : ");
  scanf("%d%f",&s.r,&s.m);
  printf("%d%f",s.r,s.m);
}
