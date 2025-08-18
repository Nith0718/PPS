#include <stdio.h>
#define pi 3.14
int main()
{
    float radius,area;
    printf("Enter radius:");
    scanf("%f",&radius);
    area = pi*radius*radius;
    printf("The area of %f is %f",radius,area);
    return 0;

}