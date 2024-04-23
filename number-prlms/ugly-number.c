#include<stdio.h>
int main()
{
  int n,c=0;
  printf("Check the number is ugly or not\n");
  printf("-------------------------------\n");
  printf("Input an integer: ");
  scanf("%d",&n);
  if(n<=1)
  printf("Wrong input");
  else{
  while(n>1)
  {
    if(n%2==0)
    n=n/2;
    else if(n%3==0)
    n=n/3;
    else if(n%5==0)
    n=n/5;
    else{
      c=1;
      break;
    }
  }
  if(c==0)
  printf("It is a ugly number");
  else
  printf("It is not a ugly number");
  return 0;
  }

}
