//Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int a[10][10], r, c, distinct = 1;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    if(r != c) {
        printf("Matrix is not square, cannot check diagonal\n");
        return 0;
    }

    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < r; i++) {
        for(int j = i + 1; j < r; j++) {
            if(a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
        if(!distinct) break;
    }

    if(distinct)
        printf("All diagonal elements are distinct\n");
    else
        printf("Diagonal elements are not distinct\n");

    return 0;
}
