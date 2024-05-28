#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int m;
void fillup(int arr[m][m]){
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      arr[i][j]=(rand()%100);
    }
  }
}
void print(int arr[m][m]){
  for(int i=0;i<m;i++){
    printf("|");
    for(int j=0;j<m;j++){
      printf(" %d ",arr[i][j]);
    }
    printf("|\n");
  }
}

int main(){
  
  time_t t;
  srand ((unsigned) time (&t));
  printf("Enter the order of the matrices: ");
  scanf("%d",&m);

  //first matrix
  int a[m][m];
  fillup(a);
  //second matrix
  int b[m][m];
  fillup(b);

  print(a);
  printf("\n");
  print(b);

  
  //multiplying matrix
  int c[m][m];
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      c[i][j]=0;
      for(int k=0;k<m;k++){
        c[i][j]+=a[i][k]*b[k][j];
      }
    }
  }
  printf("\nThe multiplied matrix is: \n");
  print(c);
  
  return 0;
}