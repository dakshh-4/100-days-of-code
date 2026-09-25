//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

#define ROWS 3
#define COLS 4

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int rowSum[ROWS];

    // Calculate sum of each row
    for (int i = 0; i < ROWS; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < COLS; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Print the matrix
    printf("Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print row sums
    printf("\nSum of each row:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Row %d sum = %d\n", i, rowSum[i]);
    }

    return 0;
}