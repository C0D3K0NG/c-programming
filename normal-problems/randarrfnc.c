#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
 int array[10];
void printArray(int *array) {
  for (int i = 0; i < 10; ++i) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main() {
  time_t t1;
  srand ( (unsigned) time (&t1));
 
  for(int i=0;i<10;i++){
    array[i]=((rand()%100)+1);
  }

  printArray(array);

  return 0;
}