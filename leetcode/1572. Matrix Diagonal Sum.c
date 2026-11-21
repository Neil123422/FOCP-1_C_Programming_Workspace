#include <stdio.h>

int diagonalSum(int mat[][100], int matSize) {
    int sum = 0;
    for (int i = 0; i < matSize; i++) {
        sum += mat[i][i];
        if (i != matSize - 1 - i) {
            sum += mat[i][matSize - 1 - i];
        }
    }
    return sum;
}

int main(void) {
    int n;
    scanf("%d", &n);
    int mat[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) scanf("%d", &mat[i][j]);
    }
    printf("%d\n", diagonalSum(mat, n));
    return 0;
}
