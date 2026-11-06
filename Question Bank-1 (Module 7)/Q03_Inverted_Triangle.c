/* Q3 - Inverted Triangle
 * Complete program: reads n from stdin, prints the pattern to stdout.
 */
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}
