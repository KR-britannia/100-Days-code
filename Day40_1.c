// Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[100][100];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int line = 1; line <= (rows + cols - 1); line++) {
        int start_col = (line > rows) ? line - rows : 0;
        int count = (line > cols ? cols - start_col : line - start_col);

        for (int j = 0; j < count; j++) {
            int row = (line - 1) - (start_col + j);
            int col = start_col + j;
            printf("%d ", matrix[row][col]);
        }
    }

    return 0;
}
