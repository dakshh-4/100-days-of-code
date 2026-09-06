//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int n, original, reversed_num = 0, last_digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n > 0) {
        last_digit=n%10;
        reversed_num=reversed_num*10+last_digit;
        n=n/10;
    }
    if (original == reversed_num)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);
    return 0;
}