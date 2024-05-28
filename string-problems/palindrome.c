//Write a C program to find reverse of a string and compare with the original 
#include <stdio.h>
#include <string.h>

int main() {
    char str[100],org[100];
    printf("Enter a string: ");
    scanf("%s", str);
    strcpy(org,str);//original string

    // Find the length of the string
    int len = strlen(str);

    // Reverse the string
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // Print the reversed string
    printf("The reversed string is: %s\n", str);

  int c= strcmp(org,str);
  if(c==0){
    printf("Palindrome string");
  }
  else
    printf("Not Palindrome");
    return 0;
}