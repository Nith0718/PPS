#include <stdio.h>
int main()
{   
int i=1;
while(i<=5){
    if(i==3){
        goto end;
    }
    printf("%d \t",i);
    i++;
}
end:
    printf("\nExited loop at i = %d",i);
    return 0;
}   
