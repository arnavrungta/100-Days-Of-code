//Write a program to calculate an electricity bill based on units consumed.
#include<stdio.h>

int main(){
    int unit,unitbill,totalbill;
    printf("enter unit consumed = ");
    scanf("%d",&unit);
    printf("PER UNIT COST IS 6 RUPEES");
    unitbill=unit*6;//per unit cost 6 rupees
    totalbill=unitbill+50;
    printf("\nunit bill charge = %d",unitbill);
    printf("\nfixed charges = 50");
    printf("\ntotal bill = %d",totalbill);
    return 0;
}   