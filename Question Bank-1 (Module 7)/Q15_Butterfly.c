/* Q15 - Butterfly Pattern
 * n is odd. Each wing grows to w_max = (n+1)/2 stars. The gap between wings is
 * 2*(w_max - w) + 1 spaces, so the widest row still has one space in the middle.
 * Complete program: reads n from stdin, prints the pattern to stdout.
 */
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int wmax = (n + 1) / 2;
    for (int i = 1; i <= n; i++) {
        int w = (i <= wmax) ? i : n - i + 1;        /* wing size on this row */
        int gap = 2 * (wmax - w) + 1;
        for (int j = 1; j <= w; j++)   printf("*");
        for (int s = 1; s <= gap; s++) printf(" ");
        for (int j = 1; j <= w; j++)   printf("*");
        printf("\n");
    }
    return 0;
}
