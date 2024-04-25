#include<stdio.h>
int main(){
  int n;
  double y=1.0;
  printf("Enter a number: ");
  scanf("%d",&n);
  
  printf("1");
  for(int i=2;i<=n;i++)
  {
    y=y+(1.0/i);
    printf(" + 1/%d\n",i);
  }
  printf("Sum is %lf",y);
  return 0;
}