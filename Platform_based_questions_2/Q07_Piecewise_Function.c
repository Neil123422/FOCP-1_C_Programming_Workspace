#include <stdio.h>

long long evaluateFunction(long long x) {
    if (x < 0) {
        return x * x + 2 * x + 1;
    }
    if (x < 10) {
        return 3 * x + 2;
    }
    return 5 * x - 7;
}

int main(void) {
    long long x;
    scanf("%lld", &x);
    printf("%lld\n", evaluateFunction(x));
    return 0;
}
