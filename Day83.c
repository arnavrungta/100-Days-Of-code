#include <stdio.h>

enum Month { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main(void) {
    int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    const char *names[] = {
        "", "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
        "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
    };

    for (enum Month m = JAN; m <= DEC; m++)
        printf("%s has %d days\n", names[m], days[m]);

    return 0;
}
