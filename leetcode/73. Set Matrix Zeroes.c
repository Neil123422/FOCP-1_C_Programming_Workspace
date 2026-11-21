#include <stdio.h>

void setZeroes(int matrix[][100], int rows, int columns) {
    int zeroRow[100] = {0};
    int zeroColumn[100] = {0};

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] == 0) {
                zeroRow[i] = 1;
                zeroColumn[j] = 1;
            }
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (zeroRow[i] || zeroColumn[j]) matrix[i][j] = 0;
        }
    }
}

int main(void) {
    int r, c;
    scanf("%d %d", &r, &c);
    int matrix[100][100];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) scanf("%d", &matrix[i][j]);
    }

    setZeroes(matrix, r, c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d%c", matrix[i][j], j == c - 1 ? '\n' : ' ');
        }
    }
    return 0;
}
