// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        sum += (2 * i - 1) / (double)(2 * i);
    }
    printf("%.6lf\n", sum);
    return 0;
}
