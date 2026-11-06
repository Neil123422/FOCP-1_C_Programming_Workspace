/* HackerRank - Solve Me First
 * Submit: only the solveMeFirst() function (HackerRank supplies main).
 */
#include <stdio.h>

int solveMeFirst(int a, int b) {
    return a + b;
}

/* ---------- LOCAL TEST ONLY (VS Code): delete everything below this line when submitting to the online judge ---------- */
int main(void) {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d\n", solveMeFirst(num1, num2));
    return 0;
}
