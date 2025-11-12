//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int num;
    long long binary = 0;  
    int remainder, place = 1;  

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (num > 0) {
        remainder = num % 2;       
        binary = binary + remainder * place;  
        num = num / 2;             
        place = place * 10;        
    }

    printf("Binary: %lld\n", binary);

    return 0;
}
