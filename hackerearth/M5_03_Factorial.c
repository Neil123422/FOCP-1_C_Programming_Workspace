/* HackerEarth - Factorial!
 * Full stdin/stdout program: submit as is.
 */
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    unsigned long long f = 1;
    for (int i = 2; i <= n; i++) f *= i;
    printf("%llu\n", f);
    return 0;
}
