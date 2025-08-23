//Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>

int main(){
    int celcius;
    printf("enter temp in celcius");
    scanf("%d",&celcius);
    
    int fahrenhite = (celcius*9/5)+32;
    printf("temp in f is %d",fahrenhite);
    return 0;
} 