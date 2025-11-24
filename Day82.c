#include <stdio.h>

enum Traffic { RED, YELLOW, GREEN };

int main(void) {
    enum Traffic signal = GREEN;

    if (signal == RED)
        printf("Stop\n");
    else if (signal == YELLOW)
        printf("Wait\n");
    else if (signal == GREEN)
        printf("Go\n");

    return 0;
}
