/* HackerEarth - Prime Numbers
 * Prints YES if N is prime, otherwise NO.
 * VERIFY the exact output wording / input format on the problem page.
 * Full stdin/stdout program.
 */
#include <stdio.h>

int main(void) {
    long long n;
    scanf("%lld", &n);
    int prime = (n >= 2);
    for (long long i = 2; i * i <= n && prime; i++)
        if (n % i == 0) prime = 0;
    printf("%s\n", prime ? "YES" : "NO");
    return 0;
}
