#include <stdio.h>
int main() {
    char str[50];
    int vowels=0;
    printf("enter the string");
    fgets(str, 50, stdin);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'|| str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        vowels++;
    }
    printf("number of vowels:%d",vowels);
    return 0;
}