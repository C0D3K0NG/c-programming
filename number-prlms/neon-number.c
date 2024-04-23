#include<stdio.h>
#include<math.h>

int digitSum();

int main()
{
  int u,sq;
  printf("Check the number is neon or not\n");
  printf("-------------------------------\n");
  printf("Input an integer: ");
  scanf("%d",&u);
  if(u<=0)
  printf("Wrong Input");
  sq=pow(u,2);
  if(u==digitSum(u))
  printf("%d is a neon number",u);
  else
  printf("%d is not a neon number",u);
  return 0;
}
int digitSum(int c)
{
  int sum=0;
  while(c>0){
    sum+=(c%10);
    c/=10;
  }
  return sum;
}
