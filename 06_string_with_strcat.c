#include <stdio.h>
#include <string.h>
int main() {
    char str1[20] = "Hello, ";
    char str2[] = "World!";
    
    // Concatenate str2 to str1
    strcat(str1, str2);
    
    // Print the concatenated string
    printf("Concatenated String: %s\n", str1);
    
    return 0;

}