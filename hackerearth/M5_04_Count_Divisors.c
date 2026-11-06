/* HackerEarth - Count Divisors
 * Given l, r, k: count numbers in [l, r] divisible by k.
 * Full stdin/stdout program: submit as is.
 */
#include <stdio.h>

int main(void) {
    int l, r, k, count = 0;
    scanf("%d %d %d", &l, &r, &k);
    for (int i = l; i <= r; i++)
        if (i % k == 0) count++;
    printf("%d\n", count);
    return 0;
}
