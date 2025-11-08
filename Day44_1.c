// Count spaces, digits, and special characters in a string.
#include <stdio.h>

int main() {
    char str[1000];
    int spaces = 0, digits = 0, special = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (ch == ' ' || ch == '\n') {
            spaces++;
        } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // it's a letter, do nothing
        } else {
            special++;
        }
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", special);

    return 0;
}
