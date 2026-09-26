//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

#define MAX 10

int sumOfDiagonal(int mat[MAX][MAX], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mat[i][i];
    }
    return sum;
}

int main() {
    int n;
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int mat[MAX][MAX];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int sum = sumOfDiagonal(mat, n);
    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}