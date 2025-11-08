// Find the digit that occurs the most times in an integer number
#include <stdio.h>

int main() {
    char num[100];
    int count[10] = {0};
    scanf("%s", num);

    for(int i = 0; num[i] != '\0'; i++) {
        count[num[i] - '0']++;
    }

    int max = count[0], digit = 0;
    for(int i = 1; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            digit = i;
        }
    }

    printf("%d\n", digit);
    return 0;
}
