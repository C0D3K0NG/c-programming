#include<stdio.h>
int main(){
  int a[10],data,flag=0;
  printf("Enter 10 elements: ");
  for(int i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the value you want to search the index of: ");
  scanf("%d",&data);
  for(int i=0;i<10;i++){
    if(a[i]==data){
      flag=1;
      printf("%d is found in index %d",data,i);
      break;
    }
  }
  if(flag==0)
  printf("%d is not found in the number set",data);
  return 0;
}