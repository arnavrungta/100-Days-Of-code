// Find the longest word in a sentence.

#include <stdio.h>

int main() {
    char str[200], longest[200], current[200];
    int i = 0, j = 0, maxLen = 0, currLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            current[j++] = str[i];
            currLen++;
        } else {
            current[j] = '\0';
            if (currLen > maxLen) {
                maxLen = currLen;
                int k;
                for (k = 0; k <= currLen; k++)
                    longest[k] = current[k];
            }
            j = 0;
            currLen = 0;
        }
        if (str[i] == '\0')
            break;
        i++;
    }

    printf("Longest word: %s", longest);

    return 0;
}
