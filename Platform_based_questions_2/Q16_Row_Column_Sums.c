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

    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            sum += matrix[i][j];
        }
        printf("%d%c", sum, i == r - 1 ? '\n' : ' ');
    }

    for (int j = 0; j < c; j++) {
        int sum = 0;
        for (int i = 0; i < r; i++) {
            sum += matrix[i][j];
        }
        printf("%d%c", sum, j == c - 1 ? '\n' : ' ');
    }
    return 0;
}
