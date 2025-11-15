// Reverse a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, len = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[len] != '\0')
        len++;

    j = len - 1;

    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reversed string: %s", str);

    return 0;
}
