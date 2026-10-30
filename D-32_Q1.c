//merge two arrays.
#include <stdio.h>
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int k = 0;
    for (int i = 0; i < n1; i++)
        merged[k++] = arr1[i];
    for (int j = 0; j < n2; j++)
        merged[k++] = arr2[j];
}
int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[n1 + n2];
    mergeArrays(arr1, n1, arr2, n2, merged);
    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", merged[i]);
    printf("\n");
    return 0;
}