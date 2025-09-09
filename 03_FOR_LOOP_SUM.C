#include <stdio.h>
int main()
{   
    int n,i,sum=0;
    printf("Enter limit: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==00)
        {
            sum=sum+i;
        }
    }
    printf("Sum is: %d",sum);
        
}

