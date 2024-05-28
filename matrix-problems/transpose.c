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
  print(a);

  //transpose matrix
  int tr[m][m];
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        tr[i][j]=a[j][i];
    }
  }

  printf("\n The transpose of the matrix is : \n");
  print(tr);
  return 0;
}