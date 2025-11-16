// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c >= 'a' && c <= 'z') {
            freq[c - 'a']++;
            if (freq[c - 'a'] == 2) {
                printf("First repeating lowercase alphabet: %c", c);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.");
    return 0;
}
