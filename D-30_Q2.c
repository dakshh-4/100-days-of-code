//Count positive, negative, and zero elements in an array.
#include <stdio.h>

void countPosNegZero(int arr[], int size, int *posCount, int *negCount, int *zeroCount) {
    *posCount = 0;
    *negCount = 0;
    *zeroCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0)
            (*posCount)++;
        else if (arr[i] < 0)
            (*negCount)++;
        else
            (*zeroCount)++;
    }
}

int main() {
    int arr[] = {5, -3, 0, 8, -1, 0, 12, -7, 4, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int posCount, negCount, zeroCount;

    countPosNegZero(arr, size, &posCount, &negCount, &zeroCount);

    printf("Positive numbers: %d\n", posCount);
    printf("Negative numbers: %d\n", negCount);
    printf("Zeros: %d\n", zeroCount);

    return 0;
}