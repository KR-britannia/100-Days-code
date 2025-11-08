// Find the longest word in a sentence
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int maxLen = 0, len = 0, start = 0, maxStart = 0;
    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') len++;
        else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
            start = i + 1;
        }
        if (str[i] == '\0') break;
    }

    for (int i = maxStart; i < maxStart + maxLen; i++) printf("%c", str[i]);
    printf("\n");
    return 0;
}
