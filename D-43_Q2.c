//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(const char *s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(void) {
    const char *tests[] = {"racecar", "hello", "madam", "a", ""};

    for (int i = 0; i < 5; i++) {
        printf("\"%s\" -> %s\n", tests[i],
               is_palindrome(tests[i]) ? "palindrome" : "not a palindrome");
    }
    return 0;
}