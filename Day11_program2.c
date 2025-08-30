//Write a program to find profit or loss percentage given cost price and selling price.

//Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>

int main(){
    float cp,sp,profit,loss,percentage;
    printf("Enter cost price");
    scanf("%f",&cp);
    printf("Enter selling price");
    scanf("%f",&sp);

    if (cp<sp)
    {
        profit=sp-cp;
        percentage=(profit/cp)*100;
        printf("profit=%.2f\n",profit);
        printf("Percentage=%.2f%%",percentage);
        
    }
    if (cp>sp)
    {
        
        loss=cp-sp;
        percentage=(loss/cp)*100;
        printf("loss=%.2f\n",loss);
        printf("Percentage=%.2f%%",percentage);
        
    }
    

    return 0;
}