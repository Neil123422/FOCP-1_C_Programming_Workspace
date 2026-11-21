#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int values[10000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }

    int minimum = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int difference = abs(values[i] - values[j]);
            if (difference < minimum) {
                minimum = difference;
            }
        }
    }

    printf("%d\n", minimum);
    return 0;
}
