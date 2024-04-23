#include<stdio.h>
int main(){
  int u;
  printf("Check the number is abundant or not\n");
  printf("-------------------------------\n");
  printf("Input an integer: ");
  scanf("%d",&u);
  for(int n=1;n<=u;n++){
  
  int sum=0;
  for(int i=1;i<n;i++)
  {
    if(n%i==0){
    sum+=i;
    }
  }
  if(sum>n)
  printf("%d ",n);
  
  }

  return 0;
}