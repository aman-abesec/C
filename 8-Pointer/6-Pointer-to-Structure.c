//---------------1----------------
#include<stdio.h>
struct student {
  int rollno;
};
void main(){
  struct student s,*r;
  printf("Enter roll number : ");
  scanf("%d",&s.rollno);
  r=&s;
  printf("Roll number = %d",*r);
}

//---------------2--------
#include<stdio.h>
struct student {
  int rollno,m;
};
void main(){
  struct student s,*r;
  printf("Enter roll number : ");
  scanf("%d%d",&s.rollno,&s.m);
  r=&s;
  printf("Roll number = %d %d",r->rollno,r->m);
}
