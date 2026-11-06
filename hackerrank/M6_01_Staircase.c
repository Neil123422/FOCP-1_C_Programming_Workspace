/* HackerRank - Staircase
 * Submit: the staircase() function (HackerRank supplies main).
 */
#include <stdio.h>

void staircase(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) putchar(' ');
        for (int j = 0; j < i; j++)     putchar('#');
        putchar('\n');
    }
}

/* ---------- LOCAL TEST ONLY (VS Code): delete everything below this line when submitting to the online judge ---------- */
int main(void) {
    int n;
    scanf("%d", &n);
    staircase(n);
    return 0;
}
