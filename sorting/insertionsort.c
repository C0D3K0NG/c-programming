#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int n;
void insertionsort();  

//function to print the array
void printArray(int arr[]){
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}


int main(){
    
    //time variable
    time_t t;

    //taking the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int ar[n];

    //randomized numbers for the array,taking the size from the user and filling it up with random numbers
    srand ( (unsigned) time (&t));
    for(int i=0;i<n;i++){
        ar[i]=(rand()%100);
    }

    //Before sorting , the array will print the randomized number
    printf("Before sorting: ");
    printArray(ar);


    //After sorting, the array will print the sorted array in ascending order
    insertionsort(ar);
    printf("\nAfter sorting: ");
    printArray(ar);

    return 0;
}
void insertionsort(int arr[n]){
  for(int i=1;i<n;i++){
    int temp=arr[i];
    int j=i-1;
    while(j>=0&&arr[j]>temp){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=temp;
  }
}
