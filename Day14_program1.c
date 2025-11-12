//Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, sum;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    sum = n * n;  
    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
