//Question: Get a number as String and 
//print the integer value of the string.
#include <stdio.h>
#include <stdlib.h>

int main() {
    char num_str[10];
    printf("Enter a number as string: ");
    scanf("%s", num_str);
    int num = atoi(num_str);
    printf("Integer value of the string is: %d\n", num);
    return 0;
}