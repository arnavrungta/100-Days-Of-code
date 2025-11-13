//Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int n, i, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter element to search: ");
    scanf("%d", &key);

    int left = 0, right = n - 1, mid;
    while(left <= right) {
        mid = (left + right) / 2;
        if(arr[mid] == key) {
            printf("Found at index %d\n", mid);
            return 0;
        } else if(arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    printf("Element not found\n");
    return 0;
}
