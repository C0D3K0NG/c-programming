#include<stdio.h>
int main(){
  int u,pre,aft=0;
  printf("Check the number is lycheral or not\n");
  printf("-------------------------------\n");
  printf("Input an integer: ");
  scanf("%d",&u);
  if(u<=0)
  printf("Wrong Input");
  pre=u;
  while(u!=0)
  {
    aft=(aft*10)+(u%10);
    u=u/10;
  }
  int sum,back,forth=0;
  sum=pre+aft;
  back=sum;
  while(sum!=0)
  {
    forth=(forth*10)+(sum%10);
    sum=sum/10;
  }
  if(back==forth);
  printf("%d is a lycheral number",pre);

  return 0;
}