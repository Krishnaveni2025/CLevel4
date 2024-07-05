//Question: Total number of prime numbers below 1,000,000 have the sum of their digits
//equal to 14?
//Example: 59. 5 + 9 = 14
#include <stdio.h>
#include <stdbool.h>
// Function to check if a number is prime
bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to calculate the sum of digits
int sum_of_digits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int count = 0;
    for (int i = 2; i < 1000000; i++) {
        if (is_prime(i) && sum_of_digits(i) == 14) {
            count++;
        }
    }
    printf("Total prime numbers with sum of digits equal to 14: %d\n", count);
    return 0;
}