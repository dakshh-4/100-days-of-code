//Find the maximum and minimum element in an array.
#include <stdio.h>
void find_max_min(int arr[], int n, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}
int main() {
    int arr[] = {12, 45, 2, 67, 34, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min;
    find_max_min(arr, n, &max, &min);
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);