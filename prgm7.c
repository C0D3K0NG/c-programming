#include<stdio.h>
void non(int* a,int* b){
  *a = *a * 10;
  *b = *b * 20;
}
int main(){
  int x=2,y=3;
  printf("Before x=%d y=%d",x,y);
  non(&x,&y);
  printf("\nAfter x=%d y=%d",x,y);
  return 0;
}