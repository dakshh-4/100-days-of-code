//Delete an element from an array.
#include <stdio.h>
void deleteElement(int arr[], int *n, int pos) {
    if (pos < 0 || pos >= *n) {
        printf("Invalid position\n");
        return;
    }
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}
int main(void) {
    int arr[20] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 2; 
    deleteElement(arr, &n, pos);
    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}