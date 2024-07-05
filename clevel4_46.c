//Question: Get a number string up to 50 digits and convert it to integer array.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[51];  // 50 digits + 1 for null terminator
    printf("Enter a string of numbers: ");
    scanf("%s", str);
    int len = strlen(str);
    int* arr = (int*) malloc(len * sizeof(int));  // Array to store integers
    for (int i = 0; i < len; i++) {
        arr[i] = str[i] - '0';  // Convert character to integer
    }
    printf("Integer array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);  // Free allocated memory
    return 0;
}