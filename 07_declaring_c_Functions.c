#include <stdio.h>
int sum(int a, int b) {
    return a + b;
}
int main() {
    int a = 30, b = 40;
    int result = sum(a, b);
    printf("Sum is: %d\n", result);
    return 0;
}