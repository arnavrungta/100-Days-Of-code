//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>

int main(){
    int lenght,breath;
    printf("enter the lenght of rectange");
    scanf("%d",&lenght);
    printf("enter the breath of rectange");
    scanf("%d",&breath);

    int area = lenght*breath;
    int perimeter= 2*(lenght+breath);

    printf("area is = %d",area);
    printf("perimeter is = %d",perimeter);
    return 0;
}
