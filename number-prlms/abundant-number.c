#include<stdio.h>
int main(){
  int n,sum=0;
  printf("Find out the abundant number in the range\n");
  printf("-----------------------------------------\n");
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
  if(sum>n)
  printf("It is abundant %d",sum);
  else 
  printf("It is not abundant");
  }
  return 0;
}