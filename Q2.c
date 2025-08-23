//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>

int main(){
    int num1,num2;
    printf("enter value of number 1 : ");
    scanf("%d",&num1);
    printf("enter value of number 2 : ");
    scanf("%d",&num2);

    printf("sum : %d\n",num1+num2);
    printf("difference : %d\n",num1-num2);
    printf("product : %d\n",num1*num2);
    printf("quotient : %d\n",num1/num2);
    return 0;
}
