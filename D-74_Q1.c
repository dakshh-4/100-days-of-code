//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceFile[100], destFile[100];
    char ch;

    // Take filenames from user
    printf("Enter source filename: ");
    scanf("%s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);

    // Open source file in read mode
    source = fopen(sourceFile, "r");

    if (source == NULL)
    {
        printf("Source file could not be opened.");
        return 1;
    }

    // Open destination file in write mode
    destination = fopen(destFile, "w");

    if (destination == NULL)
    {
        printf("Destination file could not be opened.");
        fclose(source);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    printf("File copied successfully!");

    // Close both files
    fclose(source);
    fclose(destination);

    return 0;
}