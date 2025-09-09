#include <stdio.h>
int main()
{   
    int n;
    printf("Enter how many digits you want to print: ");
    scanf("%d",&n);

    for(int i = 1;i<=n;i=i-2){ //i=i-2 will print odd numbers only.
        printf("%d \n",i);  
        //remove \n if you want to print it horizontally.
    }
}
