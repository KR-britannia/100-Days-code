// Find the second largest element in an array.
#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], secondMax = -2147483648;  
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            secondMax = max;
            max = arr[i];
        }
        else if(arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    if(secondMax == -2147483648)
        printf("No second largest element\n");
    else
        printf("%d\n", secondMax);

    return 0;
}
