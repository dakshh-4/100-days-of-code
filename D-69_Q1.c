//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int i, j;

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                printf("%d", arr[i]);
                return 0;
            }
        }
    }

    return 0;
}