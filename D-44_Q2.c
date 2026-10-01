//Replace spaces with hyphens in a string.Replace spaces with hyphens in a string.
#include <stdio.h>

int main(void) {
    char str[256];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            str[i] = '\0';
        else if (str[i] == ' ')
            str[i] = '-';
    }
    
    printf("Result: %s\n", str);
    return 0;
}