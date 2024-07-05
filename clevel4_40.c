//Question: Get an integer and print it as string.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    char* str = malloc(12);  // 12 is the maximum number of digits in an int + 1 for null terminator
    sprintf(str, "%d", num);
    printf("String value of the integer is: %s\n", str);
    free(str);  // Don't forget to free the allocated memory
    return 0;
}