//Write a program to print the following pattern:
//*****
// ****
//  ***
//   **
//    *
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // print leading spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        // print stars
        for (j = 1; j <= n - i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}