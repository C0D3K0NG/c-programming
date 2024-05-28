//   Write a C program to count total number of vowels and consonants in a string
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
  int vow=0,con=0;  //count the number of vowels and consonants in a string
  char str[100];
  printf("Enter a sentence to count the number of vowels and consonants: ");
  gets(str);
  for(int i=0;i<(strlen(str));i++){
    str[i]=tolower(str[i]);
    if(str[i]>=97&&str[i]<=122){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
      vow++;
    else
      con++;
    }
  }
  printf("The amount of vowels are: %d and amount of consonants are: %d",vow,con);
  return 0;
}