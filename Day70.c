// Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    // Convert first character to uppercase (if alphabet)
    if (len > 0 && isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    // Convert the rest to lowercase
    for (int i = 1; i < len; i++) {
        str[i] = tolower(str[i]);
    }

    printf("Sentence case: %s", str);

    return 0;
}
