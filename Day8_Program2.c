//Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter num1:");
    scanf("%d",&a);
    printf("Enter num2:");
    scanf("%d",&b);
    printf("Enter num3:");
    scanf("%d",&c);

    if(a==b && b==c){
        printf("all numbers are same");
    }
    else if (a>b && a>c)
    {
        printf("num1 is greatest %d",a);
    }
    else if (b>a && b>c){
        printf("num2 is greatest %d",b);
    }
    else{
        printf("num3 is greatest %d",c);
    }

    return 0;
}