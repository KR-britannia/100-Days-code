// Write a program to find profit or loss percentage given cost price and selling price
#include <stdio.h>

int main() {
    double cp, sp, amount, percent;

    printf("Enter cost price: ");
    scanf("%lf", &cp);
    printf("Enter selling price: ");
    scanf("%lf", &sp);

    if(sp > cp) {
        
        amount = sp - cp;
        percent = (amount * 100) / cp;
        printf("Profit = %.2lf\n", amount);
        printf("Profit Percentage = %.2lf%%\n", percent);
    }
    else if(cp > sp) {
        amount = cp - sp;
        percent = (amount * 100) / cp;
        printf("Loss = %.2lf\n", amount);
        printf("Loss Percentage = %.2lf%%\n", percent);
    }
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
