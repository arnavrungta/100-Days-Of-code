/* Q148: Take two structs & check if they are identical */
#include <stdio.h>
#include <string.h>

struct Student{
    char name[50];
    int roll;
    float per;
};

int main(){
    struct Student a={"Rohan",10,88.5},b={"Rohan",10,88.5};
    if(strcmp(a.name,b.name)==0 && a.roll==b.roll && a.per==b.per)
        printf("Identical");
    else
        printf("Not Identical");
}
