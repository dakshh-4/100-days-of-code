//Print initials of a name with the surname displayed in full.
#include <stdio.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }
    printf("%c. ", name[0]);

    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ') {
            printf("%c. ", name[i + 1]);
        }
    }
    for (i = lastSpace + 1; name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }

    return 0;
}