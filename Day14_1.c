//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, sum = 0, odd = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += odd;   
        odd += 2;     
    }

    printf("Sum: %d\n", sum);

    return 0;
}
