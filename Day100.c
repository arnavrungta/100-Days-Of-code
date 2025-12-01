/* Use pointer to struct to modify and display data using -> operator */
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *s = malloc(sizeof(struct Student));

    scanf("%s %d %f", s->name, &s->roll, &s->marks);

    s->roll += 1;
    s->marks += 5;

    printf("%s %d %.2f", s->name, s->roll, s->marks);

    free(s);
    return 0;
}
