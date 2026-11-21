#include <stdio.h>

int main(void) {
    int r, c;
    scanf("%d %d", &r, &c);

    int matrix[100][100];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int found = 0;
    for (int i = 0; i < r && !found; i++) {
        for (int j = 0; j < c; j++) {
            int rowMinimum = 1;
            int columnMaximum = 1;

            for (int k = 0; k < c; k++) {
                if (matrix[i][k] < matrix[i][j]) {
                    rowMinimum = 0;
                }
            }
            for (int k = 0; k < r; k++) {
                if (matrix[k][j] > matrix[i][j]) {
                    columnMaximum = 0;
                }
            }

            if (rowMinimum && columnMaximum) {
                printf("%d %d %d\n", i, j, matrix[i][j]);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("None\n");
    }
    return 0;
}
