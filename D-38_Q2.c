//Check if a matrix is symmetric.
#include <stdio.h>

#define N 3

int main(void) {
    int matrix[N][N] = {
        {1, 2, 3},
        {2, 5, 6},
        {3, 6, 9}
    };

    int is_symmetric = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = 0;
                break;
            }
        }
        if (!is_symmetric) break;
    }

    if (is_symmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
