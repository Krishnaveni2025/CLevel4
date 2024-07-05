//Question: Convert an integer array of up to 50 digits to character array and print 
 //using print using “printf(“%s”, ….);”
//E.g.: Array – 1 4 5 8 7 6 3 Answer: 1458763
#include <stdio.h>
#include <string.h>

int main() {
    int len;
    printf("Enter length of array: ");
    scanf("%d", &len);
    int arr[len];
    printf("Enter elements of array: ");
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    char str[len + 1];
    for (int i = 0; i < len; i++) {
        str[i] = arr[i] + '0';  // Convert integer to character
    }
    str[len] = '\0';  // Add null terminator

    printf("%s\n", str);

    return 0;
}