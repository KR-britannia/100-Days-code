// Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, product = 1, digit, found = 0;
    scanf("%d", &num);
    while(num != 0) {
        digit = num % 10;
        if(digit % 2 != 0) {
            product *= digit;
            found = 1;
        }
        num /= 10;
    }
    if(found)
        printf("%d\n", product);
    else
        printf("No odd digits\n");
    return 0;
}
