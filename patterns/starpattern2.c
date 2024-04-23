#include<stdio.h>
int main(){
  int n,c=1;
  printf("Enter no. of rows: ");
  scanf("%d",&n);
  for(int i=n;i>0;i--)
  { 
    
    for(int p=1;p<c;p++)
    printf("   ");
    for(int j=i;j>0;j--){
    printf(" * ");
    }
    for(int k=i-1;k>0;k--)
    printf(" * ");
    c++;
    printf("\n");
  }
  return 0;
}