// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    int numerator, denominator;
    scanf("%d", &n);
    numerator = 2;
    denominator = 3;
    for(i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }
    printf("%.6lf\n", sum);
    return 0;
}
