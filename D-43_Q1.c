//Reverse a string.
#include <stdio.h>
#include <string.h>

void reverse(char *s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        char tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++;
        right--;
    }
}

int main(void) {
    char str[] = "Hello, World!";
    reverse(str);
    printf("%s\n", str);   // !dlroW ,olleH
    return 0;
}