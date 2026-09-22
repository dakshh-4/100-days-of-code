//Insert an element in an array at a given position.
#include <stdio.h>
void insertElement(int arr[], int *n, int pos, int value) {
    if (pos < 0 || pos > *n) {
        printf("Invalid position\n");
        return;
    }
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    (*n)++;
}
int main(void) {
    int arr[20] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 2;
    int value = 99;
    insertElement(arr, &n, pos, value);
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}