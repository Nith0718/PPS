#include <stdio.h>
#include <string.h>
int main() {
    char str1[] = "Hello";
    char str2[] = "World";

    int result = strcmp(str1, str2);
    if (result==0) {
        printf("The strings are equal.\n");
    } 
    else 
    {
        printf("strings are not equal.\n");
    }
    return 0;
}