// Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int matrix[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }

    printf("%d\n", sum);
    return 0;
}
