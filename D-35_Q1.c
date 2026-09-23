//find the second largest element in an array.
#include <stdio.h>

int secondLargest(int arr[], int n) {
    int largest = arr[0], second = -2147483648;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = secondLargest(arr, n);

    if (result == -2147483648)
        printf("No second largest element exists\n");
    else
        printf("Second largest element: %d\n", result);

    return 0;
}