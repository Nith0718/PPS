#include <stdio.h>

int main() {
    long int hours, minutes, seconds, total;

    printf("Enter hours: ");
    scanf("%ld", &hours);

    printf("Enter minutes: ");
    scanf("%ld", &minutes);

    printf("Enter seconds: ");
    scanf("%ld", &seconds);

    total = (hours * 3600) + (minutes * 60) + seconds;

    printf("Total: %ld seconds.\n", total);

    return 0;
}