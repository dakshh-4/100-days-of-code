//Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() {
    int n, temp, first, last, power = 1, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    last = n % 10;
    while (temp >= 10) {
        temp /= 10;
        power *= 10;
    }
    first = temp;
        result = n - (first * power) - last
               + (last * power) + first;
    printf("After swapping: %d\n", result);
    return 0;
}