/*looping through a string*/
#include<stdio.h>
#include<string.h>
int main(){
  char word[100];
  printf("Enter a word: ");
  fgets(word,sizeof(word),stdin);
  for(int i=0;i<(strlen(word));i++){
    printf("\n%c",word[i]);
  }
  return 0;
}