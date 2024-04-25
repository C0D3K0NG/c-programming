#include<stdio.h>
void leapYear();
int main(){
  int Year;
  printf("Check the year is leap year or not: ");
  scanf("%d",&Year);
  leapYear(Year);
  return 0;
}
void leapYear(int year)
{
  if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   else {
      printf("%d is not a leap year.", year);
}
}