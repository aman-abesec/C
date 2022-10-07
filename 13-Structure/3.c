//-----------------------------------------------------
//                      Structure with Array
//-------------------------------------------------------
DECLERATION :
            struct student
            {
              char name[200];
              int r;
              float n;
            }s[60];
            main(){
              for(i=0;i<=60;i++){
                scanf("%s%d%f",&a[i].name,&a[i].r,&a[i].n);
              }
              for(i=0;i<=60;i++){
                printf("%s%d%f",a[i].name,a[i].r,a[i].n);
              }
            }

// --------------------------------Q.1
//WAP to make database of 4 student
struct student
{
  char name[200];
  int r;
  float n;
}a[4];
main(){
  int i;
  for(i=0;i<4;i++){
    scanf("%s%d%f",&a[i].name,&a[i].r,&a[i].n);
  }
  for(i=0;i<4;i++){
    printf("%s\t%d\t%f\n",a[i].name,a[i].r,a[i].n);
  }
}
