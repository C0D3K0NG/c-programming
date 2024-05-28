//Write a C program to concatenate two strings
#include<stdio.h>
#include<string.h>
int main(){
  char first[10],last[12];
  printf("Enter your first name: ");
  gets(first);
  printf("Enter your last name: ");
  gets(last);
  strcat(first,last);
  puts(first);
  return 0;
}