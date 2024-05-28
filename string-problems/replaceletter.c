/*Replace a certain letter from the whole word or sentence.
Example:-given word :DUCK
which letter to change (suppose we want to replace d in this word with l)
what the changed letter will be.
then the output LUCK*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Assuming the maximum length of the string will be 100 characters
    char targetLetter;
    int numReplacements = 0;

    printf("Enter the original string: ");
    fgets(str, sizeof(str), stdin); // Read the string including spaces

    printf("Enter the letter to replace: ");
    scanf("%c", &targetLetter);

    printf("Enter the indices of the letters to replace (separated by space): ");
    int index;
    while (scanf("%d", &index) == 1 && index >= 0) { // Read indices until invalid input
        for (int i = 0; i < strlen(str); i++) {
            if (str[i] == targetLetter && i == index) { // Check if the current character matches the target letter and its position
                str[i] = ' '; // Replace with a space (or any other placeholder)
                numReplacements++;
            }
        }
        if (scanf("%d", &index)!= 1 || index < 0) break; // Break loop on invalid input
    }

    printf("\nModified string:\n%s\n", str);
    printf("Number of replacements made: %d\n", numReplacements);

    return 0;
}
