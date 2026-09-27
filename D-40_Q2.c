//Multiply two matrices.
#include <stdio.h>

#define MAX 10

void multiplyMatrices(int A[][MAX], int B[][MAX], int C[][MAX],
                       int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void printMatrix(int mat[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rowsA, colsA, rowsB, colsB;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &rowsA, &colsA);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &rowsB, &colsB);

    // Multiplication is valid only if colsA == rowsB
    if (colsA != rowsB) {
        printf("Error: Number of columns of A must equal number of rows of B.\n");
        return 1;
    }

    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < rowsA; i++)
        for (int j = 0; j < colsA; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < rowsB; i++)
        for (int j = 0; j < colsB; j++)
            scanf("%d", &B[i][j]);

    multiplyMatrices(A, B, C, rowsA, colsA, colsB);

    printf("\nResultant Matrix (A x B):\n");
    printMatrix(C, rowsA, colsB);

    return 0;
}