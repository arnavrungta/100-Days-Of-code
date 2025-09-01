//Write a program to calculate a library fine based on late days


#include<stdio.h>

int main(){
    int days ,fine;
    printf("enter no of late days:");
    scanf("%d",&days);

    if (days<=7)
    {
       fine=days*2;
       printf("Fine = %d",fine);
    }
    else if (days<=14)
    {
        fine=days*4;
        printf("Fine = %d",fine);
    }
    else if (days<=30)
    {
        fine=days*6;
        printf("Fine = %d",fine);
    }
    else{
        printf("\nMembership cancelled");
    }

    
    
    return 0;
}



