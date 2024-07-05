//Question: Get a string and find the length of the string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a String: ");
    scanf("%s",str);
    int length = strlen(str);
    printf("The length of the string is : %d", length);
    return 0;
}