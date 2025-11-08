// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, i, key, pos = -1;
    scanf("%d", &n);
    int arr[n+1];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] > key) {
            pos = i;
            break;
        }
    }

    if(pos == -1) pos = n;

    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = key;

    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
