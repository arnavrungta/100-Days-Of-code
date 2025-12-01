/* Q146: Create Employee structure with nested Date and print details */
#include <stdio.h>

struct Date {
    int d,m,y;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date join;
};

int main(){
    struct Employee e={101,"Rahul",55000,{12,8,2023}};
    printf("%d %s %.2f %d-%d-%d",e.id,e.name,e.salary,e.join.d,e.join.m,e.join.y);
}
