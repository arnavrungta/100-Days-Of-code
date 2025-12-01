/* Define a struct with enum Gender and print person's gender */

#include <stdio.h>

enum Gender {
    MALE = 1,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Select Gender:\n1. MALE\n2. FEMALE\n3. OTHER\n");
    scanf("%d", &p.gender);

    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

    printf("Gender: ");
    switch(p.gender) {
        case MALE:   printf("MALE\n"); break;
        case FEMALE: printf("FEMALE\n"); break;
        case OTHER:  printf("OTHER\n"); break;
        default:     printf("Invalid gender\n");
    }

    return 0;
}
