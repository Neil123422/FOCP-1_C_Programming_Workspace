/* LeetCode 7 - Reverse Integer
 * Submit: only the reverse() function. Returns 0 if the result overflows 32 bits.
 */
#include <stdio.h>
#include <limits.h>

int reverse(int x) {
    long long rev = 0;
    while (x != 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
        if (rev > INT_MAX || rev < INT_MIN) return 0;
    }
    return (int)rev;
}

/* ---------- LOCAL TEST ONLY (VS Code): delete everything below this line when submitting to the online judge ---------- */
int main(void) {
    int x;
    scanf("%d", &x);
    printf("%d\n", reverse(x));
    return 0;
}
