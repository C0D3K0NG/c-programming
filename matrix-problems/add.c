//Write a C program to add two matrices of order M × N
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int m,n;
void fillup(int arr[m][n]){
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      arr[i][j]=(rand()%100);
    }
  }
}
void print(int arr[m][n]){
  for(int i=0;i<m;i++){
    printf("|");
    for(int j=0;j<n;j++){
      printf(" %d ",arr[i][j]);
    }
    printf("|\n");
  }
}

int main(){
  
  time_t t;
  srand ((unsigned) time (&t));
  printf("Enter the order of the matrices: ");
  scanf("%d%d",&m,&n);

  //first matrix
  int a[m][n];
  fillup(a);
  //second matrix
  int b[m][n];
  fillup(b);

  print(a);
  printf("\n");
  print(b);
  printf("\nThe addition of two matrices is: \n");

  //addition of matrix
  int c[m][n];
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      c[i][j]=a[i][j]+b[i][j];
    }
  }
  print(c);
  return 0;

}
