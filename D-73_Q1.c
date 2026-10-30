//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
static int is_whitespace(int ch) {
    return (ch == ' '  || 
            ch == '\n' || 
            ch == '\t' || 
            ch == '\r' || 
            ch == '\v' || 
            ch == '\f');
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Error: Could not open file '%s'.\n", argv[1]);
        return 1;
    }

    unsigned long long chars = 0;
    unsigned long long words = 0;
    unsigned long long lines = 0;

    int ch;
    int in_word = 0;

    while ((ch = fgetc(file)) != EOF) {
        chars++;

        if (ch == '\n') {
            lines++;
        }

        if (is_whitespace(ch)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }

    fclose(file);

    printf("Characters: %llu\n", chars);
    printf("Words:      %llu\n", words);
    printf("Lines:      %llu\n", lines);

    return 0;
}