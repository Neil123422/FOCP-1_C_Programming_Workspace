/* LeetCode 2235 - Add Two Integers
 * Submit: only the sum() function.
 */
#include <stdio.h>

int sum(int num1, int num2) {
    return num1 + num2;
}

/* ---------- LOCAL TEST ONLY (VS Code): delete everything below this line when submitting to the online judge ---------- */
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", sum(a, b));
    return 0;
}
