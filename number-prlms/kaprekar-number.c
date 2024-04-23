#include<stdio.h>
#include<math.h>
int main(){
  int originalnum,digitcount=0,temp,squarenum,dig,lv,rv=0,count=1;
  printf("\n\n\n\nCheck the number is kaprekar or not\n");
  printf("-----------------------------------\n");
  printf("Input an integer: ");
  scanf("%d",&originalnum); 
  printf("\n");
  lv=temp=squarenum=originalnum*originalnum;
  while(temp!=0)
  {
    digitcount++;
    temp/=10;
  }
  if(digitcount%2==0)
    dig=digitcount/2;
  else
    dig=(digitcount+1)/2;
  for(int i=1;i<=dig;i++)
  {
    int rem;
    rem=lv%10;
    lv=lv/10;
    rv+=rem*count;
    count*=10;
  }
  if((lv+rv)==originalnum)
    printf("The sum of %d and %d is %d ,which is equal to the original number,thus it is a kaprekar number.",lv,rv,(lv+rv));
  else
    printf("The sum of %d and %d is %d ,which is not equal to the original number,thus it is not a kaprekar number.",lv,rv,(lv+rv));
  return 0;
}