//C Program to Generate Multiplication Table//
#include<stdio.h>
int main()
{
  int num,mul;
  printf("Enter a number: ");
  scanf("%d",&num);
  printf("Enter the limit: ");
  scanf("%d",&mul);
  for(int i=1;i<=mul;i++)
  {
    printf("%d * %d = %d\n",num,i,(num*i));
  }
  return 0;
}