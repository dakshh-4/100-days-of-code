//Check if two strings are anagrams of each other.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, 100, stdin);

    printf("Enter second string: ");
    fgets(str2, 100, stdin);

    // Increase frequency for first string
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != '\n' && str1[i] != ' ')
            freq[str1[i]]++;
    }

    // Decrease frequency for second string
    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] != '\n' && str2[i] != ' ')
            freq[str2[i]]--;
    }

    // Check frequencies
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not Anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");

    return 0;
}