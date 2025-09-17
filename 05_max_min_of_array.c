#include <stdio.h>
int main()
{
    int arr[5]={8,5,3,9,10};
    int max=arr[0];
    int min = arr[0];
    for(int i=0;i<5;i++){
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("Maximum value is:%d and Minimum value:%d",max,min);
}