#include <stdio.h>
#define CV 32   // constant variable

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + CV;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}