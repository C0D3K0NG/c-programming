#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

void printArray(int arr[]) {
  for (int i = 0; i <10; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int array[] = {1, 2, 3, 4, 5, 8, 6, 7, 9, 10};

  printArray(array);
  return 0;
}

