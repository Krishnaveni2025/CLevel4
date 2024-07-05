
//Question: Print the Smallest Four digit prime number
//Answer: 1009
#include <stdio.h>

int main() {
    int x = 1000;
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
            printf("Smallest Four-digit prime number: %d\n", x);
            break;
        }
        x++;
    }
    return 0;
}