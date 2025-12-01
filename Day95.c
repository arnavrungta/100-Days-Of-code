/* Q145: Return a structure containing top student's details */
#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

struct Student getTop(struct Student s[],int n){
    struct Student top=s[0];
    int i;
    for(i=1;i<n;i++)
        if(s[i].marks>top.marks) top=s[i];
    return top;
}

int main(){
    int n,i;
    struct Student s[50],t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s %d",s[i].name,&s[i].marks);

    t=getTop(s,n);
    printf("%s %d",t.name,t.marks);
}
