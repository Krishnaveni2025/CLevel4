//Question: Get a String of numbers up to 50 digits and validate the number.
//E.g.: 1234567 → valid number 
//        12abc35 → Not a valid number
#include <stdio.h>
#include <string.h>
int main() {
    char str[51];  // 50 digits + 1 for null terminator
    printf("Enter a string of numbers: ");
    scanf("%s", str);
    int valid = 1;
    for (int i = 0; i < strlen(str); i++) {
        if (!isdigit(str[i])) {
            valid = 0;
            break;
        }
    }
    if (valid) {
        printf("%s is a valid number\n", str);
    } else {
        printf("%s is not a valid number\n", str);
    }
    return 0;
}