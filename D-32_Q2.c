//Find the digit that occurs the most times in an integer number.Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    long long num;
    int count[10] = {0};
    printf("Enter an integer: ");
    scanf("%lld", &num);
    long long n = num;
    if (n < 0)
        n = -n;
    if (n == 0)
        count[0]++;
    while (n != 0) {
        int digit = n % 10;
        count[digit]++;
        n /= 10;
    }
    int maxCount = 0, maxDigit = 0;
    for (int i = 0; i <= 9; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }
    printf("Digit %d occurs the most, %d times.\n", maxDigit, maxCount);
    return 0;
}
