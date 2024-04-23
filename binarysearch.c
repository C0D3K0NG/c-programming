#include<stdio.h>
int main(){
  int a[10],data,l=0,r=9,mid,flag=0;
  printf("Enter 10 elements: ");
  for(int i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the value you want to search the index of: ");
  scanf("%d",&data);
  while(l<r){
    mid=(l+r)/2;
    if(a[mid]==data){
      printf("%d is found in index in %d",data,mid);
      flag=1;
      break;
    }
    else if(a[mid]<data)
      l=mid+1;
    else 
      r=mid-1;
  }
  if(flag==0)
    printf("%d is not found in the number set",data);
  return 0;
}