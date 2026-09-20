//Search for an element in an array using linear search.
#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {10, 25, 33, 47, 52, 68, 71};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter element to search: ");

    printf("Array elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    scanf("%d", &key);

    int result = linearSearch(arr, n, key);

    if (result != -1)
        printf("Element %d found at index %d.\n", key, result);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}