#include <stdio.h>
int main() {
    char name[50], regno[20];
    float ageYears, weightGrams, percentage;
    int heightCm;
    float ageMonths, weightKg, heightMeters;
    printf("Enter Name of Student: ");
    scanf("%s", name);
    printf("Enter Roll Number: ");
    scanf("%s", regno);
    printf("Age in years: ");
    scanf("%f", &ageYears);
    printf("Weight in grams: ");
    scanf("%f", &weightGrams);
    printf("Height in cm: ");
    scanf("%d", &heightCm);
    printf("Enter CGPA/percentage: ");
    scanf("%f", &percentage);
    ageMonths = ageYears * 12;
    weightKg = weightGrams / 1000;
    heightMeters = heightCm / 100.0;
    printf("\nName of Student: %s\n", name);
    printf("Roll Number: %s\n", regno);
    printf("Age in months: %.0f months\n", ageMonths);
    printf("Weight in Kilogram: %.0f\n", weightKg);
    printf("Height in meters: %.2f\n", heightMeters);
    printf("Percentage Score Secured: %.1f%%\n", percentage);
    return 0;
}