//Count characters in a string without using built-in length functions.
#include <stdio.h>

int count_chars(const char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main(void) {
    char input[256];

    printf("Enter a string: ");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        return 1;
    }

    /* Strip the trailing newline that fgets keeps */
    int i = 0;
    while (input[i] != '\0') {
        if (input[i] == '\n') {
            input[i] = '\0';
            break;
        }
        i++;
    }

    printf("Character count: %d\n", count_chars(input));
    return 0;
}