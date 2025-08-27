#include <stdio.h>

int main() {
    int x, y, p, s, total;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    p = x * y;
    s = x + y;

    total = (s * s) + p * (s - x) * (p + y);

    printf("Total = %d\n", total);

    return 0;
}