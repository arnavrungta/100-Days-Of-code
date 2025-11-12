// Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main()
{
    int num, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 10)
    {
        printf("Swapped number = %d\n", num);
        return 0;
    }

    last = num % 10;
    digits = (int)log10(num);
    first = num / pow(10, digits);

    int middle = num % (int)pow(10, digits);
    middle = middle / 10;

    swapped = last * pow(10, digits) + middle * 10 + first;

    printf("Number after swapping first and last digits: %d\n", swapped);

    return 0;
}
