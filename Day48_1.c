// Check if one string is a rotation of another
#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000], str2[1000];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int len1 = strlen(str1), len2 = strlen(str2);
    if (str1[len1-1]=='\n') str1[len1-1]='\0';
    if (str2[len2-1]=='\n') str2[len2-1]='\0';

    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation\n");
        return 0;
    }

    strcat(str1, str1);
    if (strstr(str1, str2) != NULL) printf("Rotation\n");
    else printf("Not a rotation\n");

    return 0;
}
