//
#include <stdio.h>
int main() {
    int n, i, j, count;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        count = 2 * i - 1;
        for (j = 0; j < count; j++) {
            printf("*\n");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        count = 2 * i - 1;
        for (j = 0; j < count; j++) {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}