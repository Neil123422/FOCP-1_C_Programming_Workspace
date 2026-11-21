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

    int count = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int peak = 1;
            if (i > 0 && matrix[i][j] <= matrix[i - 1][j]) peak = 0;
            if (i + 1 < r && matrix[i][j] <= matrix[i + 1][j]) peak = 0;
            if (j > 0 && matrix[i][j] <= matrix[i][j - 1]) peak = 0;
            if (j + 1 < c && matrix[i][j] <= matrix[i][j + 1]) peak = 0;
            if (peak) count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
