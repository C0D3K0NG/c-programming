#include<stdio.h>
int main(){
  int u;
  printf("Find out the range of deficient number\n");
  printf("--------------------------------------\n");
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
  if(sum<n)
  printf("%d ",n);
  
  }

  return 0;
}