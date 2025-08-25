//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>   

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest : ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    
    printf("\nSimple Interest = %f\n", simpleInterest);
    printf("Compound Interest = %f\n", compoundInterest);

    return 0;
}
