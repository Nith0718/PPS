#include <stdio.h>
int main()
{   
int n=0,i=1;
printf("Enter a number: ");
scanf("%d",&n);
repeat:
    if(i<=n){
        printf("%d \t",i);
        i++;
        goto repeat;
    }
    return 0;
}
