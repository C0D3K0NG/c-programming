#include<stdio.h>
int main(){
  int n,c=1;
  printf("Enter the number of rows: ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    for(int j=1;j<(n-i);j++)
    {
      printf("   ");
    }
    for(int j=1; j<=i; j++)
    {
      if(j==1)
      {
        c=1;
        printf("%6d",c);
      }
      else{
        c=(c*(i-j+1))/j;
        printf("%6d",c);
      }
    }
    printf("\n");
  }
  return 0;
  }