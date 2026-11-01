//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main()
{
    FILE *fp;
    char str[200];

    fp = fopen("info.txt", "a");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    fputs(str, fp);

    printf("Text appended successfully.");

    fclose(fp);

    return 0;
}