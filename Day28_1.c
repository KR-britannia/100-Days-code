// Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i, j;
    bool isPrime;

    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        isPrime = true;
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            printf("%d ", i);
        }
    }
    return 0;
}
