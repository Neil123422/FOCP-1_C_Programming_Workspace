#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);

    int count = 0;
    for (int x = 1; x <= m; x++) {
        if (gcd(x, n) == 1) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
