// Print initials of a name with surname in full
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int lastSpace = -1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') lastSpace = i;
    }

    for (int i = 0; i <= lastSpace; i++) {
        if (i==0 || (str[i-1]==' ' && str[i]!=' ')) printf("%c.", str[i]);
    }

    for (int i = lastSpace+1; str[i] != '\0' && str[i] != '\n'; i++) printf("%c", str[i]);
    printf("\n");

    return 0;
}
