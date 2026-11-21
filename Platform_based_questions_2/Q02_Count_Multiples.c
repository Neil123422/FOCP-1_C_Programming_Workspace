#include <stdio.h>

int countMultiples(int n, int k) {
    if (n <= 0 || k <= 0) {
        return 0;
    }
    return n / k;
}

int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", countMultiples(n, k));
    return 0;
}
