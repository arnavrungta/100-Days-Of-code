#include<stdio.h>

int main(){
    int percentage;
    printf("Enter percentage");
    scanf("%d",&percentage);
    if (percentage<=100 && percentage>=90)
    {
       
        printf("GRADE A");
    }
    else if (percentage<=89 && percentage>=80)
    {
       
        printf("GRADE B");
    }
    else if (percentage<=79 && percentage>=70)
    {
       
        printf("GRADE C");
    }
    else if (percentage<=69 && percentage>=60)
    {
       
        printf("GRADE D");
    }
    else if (percentage<=59 && percentage>=50)
    {
       
        printf("GRADE E");
    } 
    else{
        printf("GRADE F");
    }
    
    return 0;
}