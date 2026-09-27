//Perform diagonal traversal of a matrix.
#include <stdio.h>

void diagonalTraverse(int mat[][10], int rows, int cols) {
    int result[1000];
    int idx = 0;

    for (int d = 0; d < rows + cols - 1; d++) {
        // Collect elements of current diagonal
        int rIdx, cIdx;
        int temp[1000], tIdx = 0;

        // Diagonal 'd': all (r, c) where r + c == d
        int rStart = (d < cols) ? 0 : d - cols + 1;
        int rEnd   = (d < rows) ? d : rows - 1;

        for (rIdx = rStart; rIdx <= rEnd; rIdx++) {
            cIdx = d - rIdx;
            temp[tIdx++] = mat[rIdx][cIdx];
        }

        // Even diagonals go bottom-up, odd diagonals go top-down
        if (d % 2 == 0) {
            for (int i = tIdx - 1; i >= 0; i--)
                result[idx++] = temp[i];
        } else {
            for (int i = 0; i < tIdx; i++)
                result[idx++] = temp[i];
        }
    }

    for (int i = 0; i < idx; i++)
        printf("%d ", result[i]);
    printf("\n");
}

int main() {
    int rows = 4, cols = 4;
    int mat[4][10] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    printf("Diagonal traversal:\n");
    diagonalTraverse(mat, rows, cols);

    return 0;
}