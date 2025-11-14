//Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int a[10][10], r, c;

    scanf("%d %d", &r, &c);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(int d = 0; d < c; d++) {
        int i = 0, j = d;
        while(i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    for(int d = 1; d < r; d++) {
        int i = d, j = c - 1;
        while(i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}
