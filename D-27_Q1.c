#include <stdio.h>
int main() {
    int n, i, j, space, star;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++)
            printf(" ");
        for (star = 1; star <= 2 * i - 1; star++)
            printf("*");
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (space = 1; space <= n - i; space++)
            printf(" ");
        for (star = 1; star <= 2 * i - 1; star++)
            printf("*");
        printf("\n");
    }
    return 0;
}