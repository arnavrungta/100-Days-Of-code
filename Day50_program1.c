// Convert date from dd/mm/yyyy to dd-Mon-yyyy.

#include <stdio.h>

int main() {
    char date[20];
    int d, m, y;
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun",
                      "Jul","Aug","Sep","Oct","Nov","Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d, &m, &y);

    if (m < 1 || m > 12) {
        printf("Invalid month");
        return 0;
    }

    printf("%02d-%s-%d", d, months[m - 1], y);

    return 0;
}
