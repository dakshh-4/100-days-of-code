//Print each character of a string on a new line.
#include <stdio.h>

int main(void) {
    char input[256];

    printf("Enter a string: ");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        return 1;
    }

    for (int i = 0; input[i] != '\0' && input[i] != '\n'; i++) {
        printf("%c\n", input[i]);
    }

    return 0;
}