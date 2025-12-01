/* Q143: Find and print the student with the highest marks */
#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n,i;
    struct Student s[50], top;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s %d",s[i].name,&s[i].marks);

    top=s[0];
    for(i=1;i<n;i++)
        if(s[i].marks>top.marks) top=s[i];

    printf("%s %d",top.name,top.marks);
    return 0;
}
