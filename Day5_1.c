//Calculate Compound and Simple interest
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, SI, CI;
    int time;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%d", &time);

    SI = (principal * rate * time) / 100.0;
    printf("Simple Interest = %.2f\n", SI);

    CI =principal * pow((1 + rate / 100), time) - principal;
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}
