#include<stdio.h>
int main(){
  int n,sum=0;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements of the array:-\n");
  for(int j=0;j<n;j++)
    scanf("%d",&arr[j]);
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  printf("The sum of the array is %d",sum);
  return 0;
  }