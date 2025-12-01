/* Q144: Write function to accept structure as parameter & print members */
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float per;
};

void printStudent(struct Student s){
    printf("%s %d %.2f",s.name,s.roll,s.per);
}

int main(){
    struct Student s={"Arnav",12,91.3};
    printStudent(s);
}
