//Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long num;
    int i, maxCount = 0, mostDigit;
    int freq[10] = {0};

    printf("Enter a number: ");
    scanf("%lld", &num);

    if(num < 0) num = -num;

    for(; num > 0; num /= 10) {
        int digit = num % 10;
        freq[digit]++;
    }

    for(i = 0; i < 10; i++) {
        if(freq[i] > maxCount) {
            maxCount = freq[i];
            mostDigit = i;
        }
    }

    printf("Most frequent digit is %d, occurring %d times.\n", mostDigit, maxCount);
    return 0;
}
