// Print the initials of a name
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    if (str[0] != '\n') printf("%c", str[0]);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != '\0' && str[i+1] != '\n') {
            printf("%c", str[i+1]);
        }
    }
    printf("\n");
    return 0;
}
