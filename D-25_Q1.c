//Write a program to print the following pattern:
//5
//45
//345
//2345
//12345
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = n - i + 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
