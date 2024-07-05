//Question: Get a string and a character from the user and find all the positions 
//where the character present and print it.
//E.g.: string : hellosurabee
//character : e
//Answer : 2, 11, 12
#include <stdio.h>
#include <string.h>

int main() {
    char str[51];  // 50 chars + null terminator
    char ch;
    printf("Enter a string: ");
    scanf("%50s", str);  // Prevent buffer overflow
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Space before %c to ignore whitespace

    int len = strlen(str);
    printf("Positions: ");
    for (int i = 0; i < len; i++) {
        if (str[i] == ch) {
            printf("%d ", i + 1);  // Print position (1-indexed)
        }
    }
    printf("\n");

    return 0;
}