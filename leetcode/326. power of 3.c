/* LeetCode 326 - Power of Three
 * Submit: only the isPowerOfThree() function.
 */
#include <stdio.h>
#include <stdbool.h>

bool isPowerOfThree(int n) {
    while (n > 0 && n % 3 == 0) n /= 3;
    return n == 1;
}

/* ---------- LOCAL TEST ONLY (VS Code): delete everything below this line when submitting to the online judge ---------- */
int main(void) {
    int n;
    scanf("%d", &n);
    printf("%s\n", isPowerOfThree(n) ? "true" : "false");
    return 0;
}
