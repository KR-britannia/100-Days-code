// Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    
    if (product == 1 && n < 2) {
        printf("No even numbers to multiply.\n");
    } else {
        printf("Product of even numbers: %d\n", product);
    }

    return 0;
}

