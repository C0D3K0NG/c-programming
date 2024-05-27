#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void printArray(int arr[]){
    for(int i=0;i<6;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
int main(){
  int arr[6];
  time_t t;
  srand((unsigned) time (&t));
  for(int i=0;i<6;i++){
    arr[i]=(rand())%100;
  }
  printArray(arr);
  for(int k=0;k<6;k++){
  int min,i,j=k;
  for(i=0;i<6;i++){
    if(arr[i]<arr[j]){
      j=i;
      min=arr[i];
  }
  }
  arr[j]=arr[0];
  arr[0]=min;
  printArray(arr);
  

}