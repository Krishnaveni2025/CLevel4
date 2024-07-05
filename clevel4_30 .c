//Question: Print the Largest eight-digit prime number
//Answer: 99999989
#include <stdio.h>

int main() {
    int x = 100000000;
    while (1) {
        int is_prime = 1;
        int i;
        for (i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("Largest eight-digit prime number: %d\n", x);
            break;
        }
        x--;
    }
    return 0;
}