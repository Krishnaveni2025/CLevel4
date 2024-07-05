//Question: Get a main string and sub string. 
//Check the sub string in main string 
//and print the position.
//E.g.: string : hellosurabee
// substring : sura
//Answer : 6
#include <stdio.h>
#include <string.h>

int main() {
    char main_str[51];  // 50 chars + null terminator
    char sub_str[51];  // 50 chars + null terminator
    printf("Enter main string: ");
    scanf("%50s", main_str);  // Prevent buffer overflow
    printf("Enter substring: ");
    scanf("%50s", sub_str);  // Prevent buffer overflow

    char *pos = strstr(main_str, sub_str);
    if (pos != NULL) {
        printf("Position: %d\n", pos - main_str + 1);  // Print position (1-indexed)
    } else {
        printf("Substring not found\n");
    }

    return 0;
}