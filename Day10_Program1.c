#include<stdio.h>

int main(){
    int side1,side2,side3;
    printf("enter 1st side of traingle");
    scanf("%d",&side1);
    printf("enter 2nd side of traingle");
    scanf("%d",&side2);
    printf("enter 3rd side of traingle");
    scanf("%d",&side3);

    if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side3 + side1 > side2)) {
        printf("The triangle is valid.\n");

        if (side1==side2 && side2==side3)
        {
           
            printf("equilatera traingle");
        }
        else if (side1==side2 ||side2== side3|| side3==side1)
        {
            printf("Isosceles triangle");
        }
        else if (side1*side1 + side2*side2 == side3*side3 || side1*side1 +side3*side3 == side2*side2 || side2*side2 + side3*side3== side1*side1 )
        {
            printf("right angle traingle");
        }
        else{
            printf("scalen traingle");
        }

    }
    else{
        printf("traignle not valid");
    }
    return 0;
}