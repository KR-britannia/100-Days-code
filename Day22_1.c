// Write a program to check if a number is a strong number.
#include <stdio.h>

int factorial(int n) {
    int fact = 1, i;
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, sum = 0, digit;
    scanf("%d", &num);
    originalNum = num;
    while(num != 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    if(sum == originalNum)
        printf("Strong\n");
    else
        printf("Not Strong\n");
    return 0;
}
