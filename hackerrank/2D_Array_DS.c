#include <stdio.h>
#include <limits.h>

int main(void) {
    int matrix[6][6];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int maximum = INT_MIN;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int sum = matrix[i][j] + matrix[i][j + 1] + matrix[i][j + 2]
                    + matrix[i + 1][j + 1]
                    + matrix[i + 2][j] + matrix[i + 2][j + 1] + matrix[i + 2][j + 2];
            if (sum > maximum) {
                maximum = sum;
            }
        }
    }

    printf("%d\n", maximum);
    return 0;
}
