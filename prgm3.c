#include<stdio.h>
int main()
{
int n,i,sum=0,t1=0,t2=1;
printf("Enter the number of terms:\n");
scanf("%d",&n);
printf("The required Fibonacci Series:\n");
 printf("%d\n%d\n",t1,t2);
for(i=0;i<n-2;i++)
{
sum=t1+t2;
printf("%d\n",sum); 
t1=t2;
t2=sum;
sum=0;
}
return 0;
}
