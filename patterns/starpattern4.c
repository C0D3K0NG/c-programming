#include<stdio.h>
int main(){
  int n;
  printf("Enter the no. of rows: ");
  scanf("%d",&n);
  int m=n;
  for(int i=1;i<=n;i++){  
    for(int j=1;j<=n;j++) {
      if(i==j||j==m)
        printf("* ");
      else
        printf("  ");
    }
    m--;
    printf("\n");
  }
  return 0;
}