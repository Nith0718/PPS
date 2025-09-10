#include <stdio.h>
int main()
{
    int count=1, sum=0, number;

    while (count<=5){
        printf("Enter number %d: ", count);
        scanf("%d", &number);
        sum = sum + number; // sum += number;
        count++;
    }
    printf("Sum = %d\n", sum);
    return 0;
}