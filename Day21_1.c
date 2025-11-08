// Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;
    scanf("%d", &num);
    lastDigit = num % 10;
    digits = (int)log10(num);
    firstDigit = num / (int)pow(10, digits);
    swappedNum = lastDigit * (int)pow(10, digits) + (num % (int)pow(10, digits)) - lastDigit + firstDigit;
    printf("%d\n", swappedNum);
    return 0;
}
