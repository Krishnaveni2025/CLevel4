//Question: Add two integer arrays of up to 50 digits and 
 //store the result in a 51 digits array.
 #include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int len1, len2;
    printf("Enter length of first array: ");
    scanf("%d", &len1);
    int* arr1 = (int*) malloc(len1 * sizeof(int));
    printf("Enter elements of first array: ");
    for (int i = 0; i < len1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter length of second array: ");
    scanf("%d", &len2);
    int* arr2 = (int*) malloc(len2 * sizeof(int));
    printf("Enter elements of second array: ");
    for (int i = 0; i < len2; i++) {
        scanf("%d", &arr2[i]);
    }

    int max_len = (len1 > len2) ? len1 : len2;
    int* result = (int*) calloc(max_len + 1, sizeof(int));  // Extra digit for carry

    for (int i = 0; i < max_len; i++) {
        int sum = (i < len1 ? arr1[i] : 0) + (i < len2 ? arr2[i] : 0) + (i > 0 ? result[i - 1] : 0);
        result[i] = sum % 10;
        result[i + 1] += sum / 10;  // Carry
    }

    printf("Result array: ");
    for (int i = max_len; i >= 0; i--) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(arr1);
    free(arr2);
    free(result);
    return 0;
}