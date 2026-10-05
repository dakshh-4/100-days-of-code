//Find the longest word in a sentence.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    int currentLength = 0;
    int maxLength = 0;

    int start = 0;
    int longestStart = 0;

    printf("Enter a sentence: ");
    fgets(str, 200, stdin);

    while (str[i] != '\0') {

        // Character is part of a word
        if (str[i] != ' ' && str[i] != '\n') {

            if (currentLength == 0)
                start = i;

            currentLength++;
        }

        // Word ended
        else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                longestStart = start;
            }

            currentLength = 0;
        }

        i++;
    }

    // Check last word
    if (currentLength > maxLength) {
        maxLength = currentLength;
        longestStart = start;
    }

    printf("Longest word: ");

    for (i = longestStart; i < longestStart + maxLength; i++) {
        printf("%c", str[i]);
    }

    printf("\nLength: %d\n", maxLength);

    return 0;
}