//Question: Print the total number of non-decreasing numbers from 1000 to 9999.Non 
//decreasing numbers have individual digits that do not have a decreasing order 
//from left to right.
//(For e.g.: 1234 is a non-decreasing number where as 2134 is not)
    
    #include <stdio.h>

int main() {
    int count = 0;
    for (int i = 1000; i <= 9999; i++) {
        int num = i;
        int prev_digit = num % 10;
        num = num / 10;
        int is_non_decreasing = 1;
        while (num != 0) {
            int digit = num % 10;
            if (digit > prev_digit) {
                is_non_decreasing = 0;
                break;
            }
            prev_digit = digit;
            num = num / 10;
        }
        if (is_non_decreasing) {
            count++;
        }
    }
    printf("Total non-decreasing numbers: %d\n", count);
    return 0;
}