//Question: Write a program to multiply up to two 50 digit numbers.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_DIGITS 50

void multiply(char* num1, char* num2, char* result) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int result_len = len1 + len2;

    // Initialize result array with zeros
    for (int i = 0; i < result_len; i++) {
        result[i] = '0';
    }

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + (result[i + j + 1] - '0');
            result[i + j + 1] = (sum % 10) + '0';
            result[i + j] = (sum / 10) + '0';
        }
    }
}

int main() {
    char num1[MAX_DIGITS + 1];
    char num2[MAX_DIGITS + 1];
    char result[(2 * MAX_DIGITS) + 1];

    printf("Enter first number: ");
    scanf("%s", num1);
    printf("Enter second number: ");
    scanf("%s", num2);

    multiply(num1, num2, result);

    printf("Result: %s\n", result);

    return 0;
}