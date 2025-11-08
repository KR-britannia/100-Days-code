// Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n')
            count++;
    }

    printf("%d\n", count);
    return 0;
}
