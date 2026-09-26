//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
#include <stdbool.h>

#define MAX 10

bool areDiagonalElementsDistinct(int mat[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mat[i][i] == mat[j][j]) {
                return false;
            }
        }
    }
    return true;
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

    if (areDiagonalElementsDistinct(mat, n)) {
        printf("Yes, diagonal elements are distinct.\n");
    } else {
        printf("No, diagonal elements are not distinct.\n");
    }

    return 0;
}