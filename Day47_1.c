// Check if two strings are anagrams of each other
#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000], str2[1000];
    int freq1[256] = {0}, freq2[256] = {0};

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != '\n') freq1[(int)str1[i]]++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] != '\n') freq2[(int)str2[i]]++;
    }

    int anagram = 1;
    for (int i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            anagram = 0;
            break;
        }
    }

    if (anagram) printf("Anagram\n");
    else printf("Not an Anagram\n");

    return 0;
}
