#include <stdio.h>

int searchMatrix(int matrix[][100], int rows, int columns, int target) {
    int low = 0, high = rows * columns - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int value = matrix[mid / columns][mid % columns];
        if (value == target) return 1;
        if (value < target) low = mid + 1;
        else high = mid - 1;
    }
    return 0;
}

int main(void) {
    int r, c, target;
    scanf("%d %d %d", &r, &c, &target);
    int matrix[100][100];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) scanf("%d", &matrix[i][j]);
    }
    printf("%s\n", searchMatrix(matrix, r, c, target) ? "true" : "false");
    return 0;
}
