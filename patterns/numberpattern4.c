#include<stdio.h>
int main()
{
  int n,c=1,s=0;
  printf("Enter a number to get the pattern upto: ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    for(int k=n-i;k>0;k--)
    {
      printf("   ");
    } 
    c=i;
    for(int j=1;j<=i;j++)
    {
      printf(" %d ",c);
      c++;
    }
    printf("\n\n");
  }
  return 0;
}