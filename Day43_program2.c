// Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[j] != '\0')
        j++;
    j--;

    while (i < j) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");

    return 0;
}
