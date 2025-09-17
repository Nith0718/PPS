#include <stdio.h>
int main()
{
    int sum=0;
    int arr[5]={20,30,40,50,60};
    for (int i = 0;i<5;i++){
        sum+=arr[i];
    }
    printf("sum = %d",sum);
}