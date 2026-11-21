#include <stdio.h>

long long gcd(long long a, long long b) {
    if (a < 0) {
        a = -a;
    }
    if (b < 0) {
        b = -b;
    }
    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main(void) {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", gcd(a, b));
    return 0;
}
