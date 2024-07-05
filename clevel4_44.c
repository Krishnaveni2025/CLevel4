//Question: Get a string of numbers up to 50 digits and remove all leading zeros. 
//E.g.: 00000012345 Answer: 12345
#include <stdio.h>
#include <string.h>

int main() {
    char str[51];  // 50 digits + 1 for null terminator
    printf("Enter a string of numbers: ");
    scanf("%s", str);
    int len = strlen(str);
    int i;
    for (i = 0; i < len; i++) {
        if (str[i] != '0') {
            break;
        }
    }
    if (i == len) {
        printf("0\n");  // All zeros, print single zero
    } else {
        printf("%s\n", str + i);  // Print from first non-zero digit
    }
    return 0;
}