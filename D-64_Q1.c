//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int n = strlen(s);

    if (n > 0 && s[n - 1] == '\n') {
        s[--n] = '\0';
    }

    int last[256];
    for (int i = 0; i < 256; i++) {
        last[i] = -1;
    }

    int start = 0, maxLen = 0;

    for (int i = 0; i < n; i++) {
        unsigned char c = s[i];

        if (last[c] >= start) {
            start = last[c] + 1;
        }

        last[c] = i;

        int len = i - start + 1;
        if (len > maxLen) {
            maxLen = len;
        }
    }

    printf("%d\n", maxLen);

    return 0;
}

