//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>

int main(){
    int inputseconds,hours,mins,secs;

    printf("Enter time in seconds");
    scanf("%d",&inputseconds);

    hours=inputseconds/3600;
    mins=(inputseconds%3600)/60;
    secs = mins%60;
    
    printf("TIme= %d:%d:%d",hours,mins,secs);
    return 0;
}