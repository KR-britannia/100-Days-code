// Print all substrings of a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    if (str[n-1] == '\n') str[n-1] = '\0';
    n = strlen(str);

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) printf("%c", str[k]);
            printf("\n");
        }
    }
    return 0;
}
