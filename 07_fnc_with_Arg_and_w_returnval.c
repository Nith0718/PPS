#include <stdio.h>
int multiply(int a, int b) {
    return a * b; 
}
int main() {
    int product = multiply(5, 10);
    printf("Product: %d\n", product);
    return 0;
}