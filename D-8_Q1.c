//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <ctype.h>
#include <stdio.h>
int main(void)
{
    char ch;
    printf("Enter a character: ");
    if (scanf("%c", &ch) != 1) {
        return 1;
    }
    if (isupper((unsigned char)ch)) {
        printf("'%c' is an uppercase alphabet.\n", ch);
    } else if (islower((unsigned char)ch)) {
        printf("'%c' is a lowercase alphabet.\n", ch);
    } else if (isdigit((unsigned char)ch)) {
        printf("'%c' is a digit.\n", ch);
    } else {
        printf("'%c' is a special character.\n", ch);
    }
    return 0;
}