// Check if two strings are anagrams of each other.

#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int freq1[256] = {0}, freq2[256] = {0};
    int i;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    for (i = 0; s1[i] != '\0'; i++)
        freq1[(unsigned char)s1[i]]++;

    for (i = 0; s2[i] != '\0'; i++)
        freq2[(unsigned char)s2[i]]++;

    for (i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not anagrams.");
            return 0;
        }
    }

    printf("Strings are anagrams.");
    return 0;
}
