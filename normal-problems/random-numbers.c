#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  time_t t1;
  srand ( (unsigned) time (&t1));
  for(int i=1;i<=10;i++){
    printf("%d ",(rand()%100)+1);
  }
  return 0;
}