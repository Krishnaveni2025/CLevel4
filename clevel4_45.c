//Question: Get a number up to 50 digits and reverse it.
//E.g.: 12345678912345 Answer: 54321987654321
#include <stdio.h>
#include <string.h>

int main() {
    char str[51];  // 50 digits + 1 for null terminator
    printf("Enter a string of numbers: ");
    scanf("%s", str);
    int len = strlen(str);
    char rev[len+1];  // Array to store reversed string
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];  // Assign reversed character
    }
    rev[len] = '\0';  // Add null terminator
    printf("Reversed string: %s\n", rev);
    return 0;
}