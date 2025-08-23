//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>

int main(){
    int r;
    printf("ENTER RADIUS");
    scanf("%d",&r);

    float area= 3.14*r*r;
    float circumference = 2*3.14*r;
    printf("area of circle is %f\n",area);
    printf("circumference of circle is %f",circumference);
    return 0;
}
