//-----------------------------------------------------
//                      PRACTISE QUESTION
//-------------------------------------------------------
// -------------------------------Q.1
//Prime or not prime no return no argument
void prime(); //function decleration
void main(){
  prime(); //function calling
}
//function defination
void prime(){
  int a,i,l=0;
  printf("Enter the number : ");
  scanf("%d",&a);
  for(i=1;i<=a;i++){
    if(a%i==0){
      l++;
    }
  }
  if(l==2){
    printf("Prime");
  }
  else{
    printf("Not Prime");
  }
}

// -------------------------------Q.2
//Prime or not prime with return no argument
int prime(); //function decleration
void main(){
  int l;
  l=prime(); //function calling
  if(l==2){
    printf("Prime");
  }
  else{
    printf("Not Prime");
  }
}
//function defination
int prime(){
  int a,i,l=0;
  printf("Enter the number : ");
  scanf("%d",&a);
  for(i=1;i<=a;i++){
    if(a%i==0){
      l++;
    }
  }
  return l;
}

// -------------------------------Q.3
//Prime or not prime no return with argument
void prime(int a); //function decleration
void main(){
  int a;
  printf("Enter the number : ");
  scanf("%d",&a);
  prime(a); //function calling
}
//function defination
void prime(int a){
  int i,l=0;
  for(i=1;i<=a;i++){
    if(a%i==0){
      l++;
    }
  }
  if(l==2){
    printf("Prime");
  }
  else{
    printf("Not Prime");
  }
}

// -------------------------------Q.4
//Prime or not prime with return with argument
int prime(int a); //function decleration
void main(){
  int a,d;
  printf("Enter the number : ");
  scanf("%d",&a);
  d=prime(a); //function calling
  if(d==2){
    printf("Prime");
  }
  else{
    printf("Not Prime");
  }
}
//function defination
int prime(int a){
  int i,l=0;
  for(i=1;i<=a;i++){
    if(a%i==0){
      l++;
    }
  }
  return l;
}

// ----------------------------------Q.5
//WAP to search an element in an array. no argument no return type
#include<stdio.h>
void search();// function decleration
void main(){
  search();//function calling
}
//function defination
void search(){
  int a[10],i,n,l,f;
  printf("Enter the size of array max 10 : ");
  scanf("%d",&l);
  printf("Enter the array : ");
  for(i=0;i<l;i++){
    scanf("%d",&a[i]);
  }
  printf("Enter the element to be search : ");
  scanf("%d",&f);
  for(i=0;i<l;i++){
    if(f==a[i]){
      printf("element %d is find at position =%d",f,i+1);
      i=0;
      break;
    }
  }
  if(i==l){
    printf("Element Not found");
  }
}

// ----------------------------------Q.5
//WAP to search an element in an array. with argument with return type*/
#include<stdio.h>
int search(int a[10],int f,int l);// function decleration
void main(){
  int f,a[10],l,i,k;
  printf("Enter the size of array max 10 : ");
  scanf("%d",&l);
  printf("Enter the array : ");
  for(i=0;i<l;i++){
    scanf("%d",&a[i]);
  }
  printf("Enter the element to be search : ");
  scanf("%d",&f);
  k=search(a[10],f,l);//function calling
  printf("%d",k);
}
//function defination
int search(int a[10],int f,int l){
  int i,j=0;
  for(i=0;i<l;i++){
    if(f==a[i]){
      j++;
      break;
    }
  }
    return j;
}

// if(k==0){
//   printf("Element not found ");
// }
// else{
//   printf("Element found at position %d",k);
// }
