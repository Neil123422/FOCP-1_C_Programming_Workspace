/* LeetCode 231 - Power of Two
 * Submit: only the isPowerOfTwo() function.
 */
#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}


int main(void) {
    int n;
    scanf("%d", &n);
    printf("%s\n", isPowerOfTwo(n) ? "true" : "false");
    return 0;
}
