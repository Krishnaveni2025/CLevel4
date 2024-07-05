//Question: Print the total number of all Palindrome numbers less than 100000.
//Example: 101,12321,656,99899,11511
#include <stdio.h>

int is_palindrome(int num) {
    int reversed = 0;
    int original = num;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int count = 0;
    for (int i = 1; i < 100000; i++) {
        if (is_palindrome(i)) {
            count++;
        }
    }
    printf("Total palindrome numbers less than 100000: %d\n", count);
    return 0;
}