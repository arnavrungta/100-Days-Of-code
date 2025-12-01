/* Q149: Use malloc to allocate structure dynamically & print details */
#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    int roll;
};

int main(){
    struct Student *p=malloc(sizeof(struct Student));
    scanf("%s %d",p->name,&p->roll);
    printf("%s %d",p->name,p->roll);
    free(p);
}
