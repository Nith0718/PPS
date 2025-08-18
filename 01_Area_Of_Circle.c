#include <stdio.h>
#define pi 3.14
int main()
{
    float radius,area,circumference;
    printf("Enter radius:");
    scanf("%f",&radius);
    area = pi*radius*radius;    
    circumference = 2*pi*radius;
    printf("The circumference of %f is %f\n",radius,circumference);
    printf("The area of %f is %f",radius,area);
    return 0;

}