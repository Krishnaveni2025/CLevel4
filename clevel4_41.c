//Question: Get an integer and print each digit as character. 
// Print one character on one line.
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        char ch = digit + '0';  // Convert digit to character
        printf("%c\n", ch);
        temp /= 10;
    }
    return 0;
}