// Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, start = 0, lastSpace = -1;

    printf("Enter full name: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] == ' ')
            lastSpace = i;
        i++;
    }

    if (str[0] != ' ' && str[0] != '\n')
        printf("%c. ", str[0]);

    for (i = 1; i < lastSpace; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n')
            printf("%c. ", str[i+1]);
    }

    for (i = lastSpace + 1; str[i] != '\0' && str[i] != '\n'; i++)
        printf("%c", str[i]);

    return 0;
}
