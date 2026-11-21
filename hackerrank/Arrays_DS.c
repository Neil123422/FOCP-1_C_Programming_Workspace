#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int values[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }
    for (int i = n - 1; i >= 0; i--) {
        printf("%d%c", values[i], i == 0 ? '\n' : ' ');
    }
    return 0;
}
