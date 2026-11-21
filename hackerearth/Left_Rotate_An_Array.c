#include <stdio.h>

int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);

    int values[10000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }

    k %= n;
    for (int i = 0; i < n; i++) {
        printf("%d%c", values[(i + k) % n], i == n - 1 ? '\n' : ' ');
    }
    return 0;
}
