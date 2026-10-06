//Reverse each word in a sentence without changing the word order.
#include <stdio.h>

#define MAX 1000

void readLine(char *buf, int size) {
    int i = 0, c;
    while (i < size - 1 && (c = getchar()) != EOF && c != '\n')
        buf[i++] = (char)c;
    buf[i] = '\0';
}

/* Reverses s[start..end] in place (inclusive) */
void reverseRange(char *s, int start, int end) {
    while (start < end) {
        char tmp = s[start];
        s[start] = s[end];
        s[end] = tmp;
        start++;
        end--;
    }
}

void reverseEachWord(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == ' ') {
            i++;
            continue;
        }
        int start = i;
        while (s[i] != '\0' && s[i] != ' ') i++;
        reverseRange(s, start, i - 1);
    }
}

int main(void) {
    char sentence[MAX];

    printf("Enter a sentence: ");
    readLine(sentence, MAX);

    reverseEachWord(sentence);
    printf("Result: %s\n", sentence);

    return 0;
}