#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main(void) {
    enum Status s = TIMEOUT;

    if (s == SUCCESS)
        printf("Operation Successful\n");
    else if (s == FAILURE)
        printf("Operation Failed\n");
    else if (s == TIMEOUT)
        printf("Operation Timed Out\n");

    return 0;
}
