#include<stdio.h>
int main(){
  int n,sum=0;
  printf("Check the number is deficient or not\n");
  printf("-------------------------------\n");
  printf("Input an integer: ");
  scanf("%d",&n);
  if(n<=0)
  printf("wrong input");
  else{
    printf("The sum of these numbers:");
  for(int i=1;i<n;i++)
  {
    if(n%i==0){
    sum+=i;
    printf("%d ",i);
    }
  }
  printf("= ");
  if(sum<n)
  printf("It is deficient %d",sum);
  else 
  printf("It is not deficient");
  }
  return 0;
}