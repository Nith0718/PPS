#include <stdio.h>
int main() 
{
    int num1,num2,temp;
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);
    
    // Swapping the values
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping, Number 1: %d\n", num1);
    printf("After swapping, Number 2: %d\n", num2);
    
    return 0;   

}