#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int found = 0;
    for (int a = 1; a < n; a++) {
        for (int b = a + 1; b < n; b++) {
            for (int c = b + 1; c <= n; c++) {
                if (a * a + b * b == c * c) {
                    printf("%d %d %d\n", a, b, c);
                    found = 1;
                }
            }
        }
    }

    if (!found) {
        printf("None\n");
    }
    return 0;
}
