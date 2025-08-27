#include <stdio.h>

int main() {
    char name[50], regno[20], address[100];
    int age;
    float weight, percentage;
    double height;

    // Input details
    printf("Enter Name of Student: ");
    scanf("%s", name);

    printf("Enter Register Number: ");
    scanf("%s", regno);

    printf("Enter Address: ");
    scanf("%s", address);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Weight (in kg): ");
    scanf("%f", &weight);

    printf("Enter Height (in meters): ");
    scanf("%lf", &height);

    printf("Enter CGPA/percentage: ");
    scanf("%f", &percentage);

    // Display information
    printf("\nName of Student: %s\n", name);
    printf("Roll Number: %s\n", regno);
    printf("Address: %s\n", address);
    printf("Age: %d years\n", age);
    printf("Weight: %.2f kg\n", weight);
    printf("Height: %.2lf meters\n", height);
    printf("Percentage Score Secured: %.1f%%\n", percentage);

    return 0;
}