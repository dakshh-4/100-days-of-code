//Check if one string is a rotation of another.
#include <stdio.h>

#define MAX 100

int length(const char *s) {
    int n = 0;
    while (s[n] != '\0') n++;
    return n;
}

int isRotation(const char *a, const char *b) {
    int n = length(a);
    if (n != length(b)) return 0;
    if (n == 0) return 1;

    for (int i = 0; i < n; i++) {
        int j = 0;
        while (j < n && a[(i + j) % n] == b[j]) j++;
        if (j == n) return 1;
    }
    return 0;
}

void readLine(char *buf, int size) {
    int i = 0, c;
    while (i < size - 1 && (c = getchar()) != EOF && c != '\n')
        buf[i++] = (char)c;
    buf[i] = '\0';
}

int main(void) {
    char s1[MAX], s2[MAX];

    printf("Enter first string: ");
    readLine(s1, MAX);
    printf("Enter second string: ");
    readLine(s2, MAX);

    if (isRotation(s1, s2))
        printf("\"%s\" is a rotation of \"%s\"\n", s2, s1);
    else
        printf("\"%s\" is NOT a rotation of \"%s\"\n", s2, s1);

    return 0;
}