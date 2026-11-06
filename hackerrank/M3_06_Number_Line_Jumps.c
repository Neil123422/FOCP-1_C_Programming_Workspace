/* HackerRank - Number Line Jumps (kangaroo)
 * Submit: only the kangaroo() function (HackerRank supplies main and I/O).
 */
#include <stdio.h>

char* kangaroo(int x1, int v1, int x2, int v2) {
    if (v1 == v2)
        return (x1 == x2) ? "YES" : "NO";
    int dx = x2 - x1, dv = v1 - v2;
    /* meet after t = dx/dv jumps; t must be a non-negative integer */
    if (dx % dv == 0 && dx / dv >= 0)
        return "YES";
    return "NO";
}

/* ---------- LOCAL TEST ONLY (VS Code): delete everything below this line when submitting to the online judge ---------- */
int main(void) {
    int x1, v1, x2, v2;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    printf("%s\n", kangaroo(x1, v1, x2, v2));
    return 0;
}
