#include<stdio.h>
int main(){
  int n;
  printf("Enter the no. of rows: ");
  scanf("%d",&n);
  for(int l=0;l<(n*2-1);l++)
  printf("*");
  printf("\n");
  //outside loop for no. of rows before the last row
  //i=0 cause when j will print j==2*i it will print extra star in first row
  for(int i=n-2;i>=0;i--){
    for(int j=n-1;j>i;j--){
      printf(" ");
    }
    for(int k=0;k<=i*2;k++){
      if(k==0||k==i*2)
        printf("*");
      else  
        printf(" ");
    }
    printf("\n");
  }

  return 0;
}