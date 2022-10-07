//--------------------------Pattern-1
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *
#include<stdio.h>
void main(){
  int i,j;
  for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
      printf(" *");
    }
    printf("\n");
  }
}

//--------------------------Pattern-2
// *
// * *
// * * *
// * * * *
// * * * * *
#include<stdio.h>
void main(){
  int i,j;
  for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
      printf(" *");
    }
    printf("\n");
  }
}

//--------------------------Pattern-3
// * * * * *
//   * * * *
//     * * *
//       * *
//         *
#include<stdio.h>
void main(){
  int i,j;
  for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
      if(j>=i)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
}

//--------------------------Pattern-4
// * * * * *
// * * * *
// * * *
// * *
// *
#include<stdio.h>
void main(){
  int i,j;
  for(i=0;i<5;i++){
    for(j=1;j<=5-i;j++){
      printf("* ");
    }
    printf("\n");
  }
}

//--------------------------Pattern-5
//         *
//       * *
//     * * *
//   * * * *
// * * * * *
#include<stdio.h>
void main(){
  int i,j;
  for(i=1;i<=5;i++){
    for(j=5;j>=1;j--){
      if(i>=j)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
}

//--------------------------Pattern-6
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
#include<stdio.h>
void main(){
  int i,j;
  for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
      printf("%d ",i);
    }
    printf("\n");
  }
}

//--------------------------Pattern-7
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
#include<stdio.h>
void main(){
  int i,j;
  for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
      printf("%d ",j);
    }
    printf("\n");
  }
}

//--------------------------Pattern-8
// A
// B B
// C C C
// D D D D
// E E E E E
#include<stdio.h>
void main(){
  int i,j;
  for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
      printf("%c ",64+i);
    }
    printf("\n");
  }
}

//--------------------------Pattern-9
// A
// A B
// A B C
// A B C D
// A B C D E
#include<stdio.h>
void main(){
  int i,j,a=64;
  for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
      printf("%c ",a+j);
    }
    printf("\n");
  }
}
