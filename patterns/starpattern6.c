#include<stdio.h>
int main(){
  int r;
  printf("Enter the diamond's row size: ");
  scanf("%d",&r);
  for(int i=1;i<=r;i++){
    for(int j=r-i;j>0;j--)
      printf("  ");
    for(int k=1;k<=i*2-1;k++)
      printf("* ");
    printf("\n");
  }
  for(int i=r-1;i>=1;i--){
    for(int j=1;j<=r-i;j++)
      printf("  ");
    for(int k=1;k<=i*2-1;k++)
      printf("* ");
    printf("\n");
  }
  
}