//Question: Adjust the carry in an integer array. (i.e. convert the 2 digit number 
//into single digit and add the carry to the next number)
//E.g.: 
//Array - 6 12 3 15 7
//Answer: 7 2 4 5 7
#include <stdio.h>

int main() {
    int len;
    printf("Enter length of array: ");
    scanf("%d", &len);
    int arr[len];
    printf("Enter elements of array: ");
    for (int i = len - 1; i >= 0; i--) {
        scanf("%d", &arr[i]);
    }

    int carry = 0;
    for (int i = len - 1; i >0; i--) {
        int sum = arr[i] + carry;
        arr[i] = sum % 10;
        carry = sum / 10;
    }

    printf("Adjusted array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
