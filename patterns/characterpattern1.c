#include<stdio.h>
int main(){
  int n,a=65;
  printf("Enter the no. of rows: ");
  scanf("%d",&n);
  if(n<27&&n>0){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      printf("%c ",a);
      a++;
    }
    
    printf("\n");
  }
  }
  return 0;
}