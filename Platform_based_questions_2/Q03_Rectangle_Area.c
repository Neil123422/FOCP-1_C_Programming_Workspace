#include <stdio.h>

long long rectangleArea(long long length, long long width) {
    return length * width;
}

int main(void) {
    long long length, width;
    scanf("%lld %lld", &length, &width);
    printf("%lld\n", rectangleArea(length, width));
    return 0;
}
