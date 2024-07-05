//Question: Get two numbers of up to 50 digits and perform addition and 
//print the result.
#include <stdio.h>

int main() {
    int len1, len2;
    printf("Enter length of first array: ");
    scanf("%d", &len1);
    int arr1[len1];
    printf("Enter elements of first array: ");
    for (int i = 0; i < len1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter length of second array: ");
    scanf("%d", &len2);
    int arr2[len2];
    printf("Enter elements of second array: ");
    for (int i = 0; i < len2; i++) {
        scanf("%d", &arr2[i]);
    }

    int max_len = (len1 > len2) ? len1 : len2;
    int result[max_len + 1];  // Extra digit for carry
    int carry = 0;

    for (int i = 0; i < max_len; i++) {
        int sum = (i < len1 ? arr1[i] : 0) + (i < len2 ? arr2[i] : 0) + carry;
        result[i] = sum % 10;
        carry = sum / 10;
    }
    result[max_len] = carry;  // Store final carry

    // Print result
    for (int i = max_len; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");

    return 0;
}