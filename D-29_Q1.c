//Find the sum of array elements.
#include <stdio.h>
int sum_array(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Sum = %d\n", sum_array(arr, n));  // Sum = 15
    return 0;
}