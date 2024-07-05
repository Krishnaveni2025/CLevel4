//Question: Get a string using gets function and count all the words in it.
//E.g.: string : Welcome to ECEN Academy
//Answer : 4
#include <stdio.h>
#include <string.h>

int main() {
    char str[51];  // 50 chars + null terminator
    printf("Enter a string: ");
    gets(str);  // Use gets to read the string

    int count = 0;
    char *token = strtok(str, " ");  // Split the string into tokens using space as delimiter
    while (token != NULL) {
        count++;  // Increment word count
        token = strtok(NULL, " ");  // Get the next token
    }

    printf("Number of words: %d\n", count);

    return 0;
}