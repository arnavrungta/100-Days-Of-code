/* Print all enum names and integer values using a loop */

#include <stdio.h>

enum Days {
    SUNDAY = 1,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    const char *dayNames[] = {
        "SUNDAY", "MONDAY", "TUESDAY",
        "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"
    };

    enum Days d;

    for(d = SUNDAY; d <= SATURDAY; d++) {
        printf("%s = %d\n", dayNames[d - 1], d);
    }

    return 0;
}
