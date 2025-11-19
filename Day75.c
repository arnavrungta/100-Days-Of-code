// Open an existing file in append mode and allow the user to enter a new line of text.
// Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    // Get the file name from the user
    printf("Enter the filename: ");
    scanf("%s", filename);
    getchar(); // Clear newline left by scanf

    // Open the file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open the file!\n");
        return 1;
    }

    // Get new line of text from the user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append to file
    fputs(text, fp);

    fclose(fp);

    printf("Text successfully appended to the file.\n");

    return 0;
}
