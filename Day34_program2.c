//Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int arr[100], n, index, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter index to insert (0 to %d): ", n);
    scanf("%d", &index);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    for(int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = value;
    n++;

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
