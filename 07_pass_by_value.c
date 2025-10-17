#include <stdio.h>
int isEvent(int num) {
    return (num % 2 == 0);
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (isEvent(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
}
    return 0;
}
