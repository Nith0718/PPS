#include <stdio.h>
int main()
{
    int arr[5];
    for(int i=0;i<5;i++){
        printf("Enter the element:");
        scanf("%d\t",&arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    
}