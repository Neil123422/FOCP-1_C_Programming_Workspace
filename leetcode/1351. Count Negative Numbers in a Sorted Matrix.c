#include <stdio.h>

int countNegatives(int grid[][100], int gridSize, int gridColSize) {
    int count = 0;
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridColSize; j++) {
            if (grid[i][j] < 0) count++;
        }
    }
    return count;
}

int main(void) {
    int r, c;
    scanf("%d %d", &r, &c);
    int grid[100][100];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) scanf("%d", &grid[i][j]);
    }
    printf("%d\n", countNegatives(grid, r, c));
    return 0;
}
