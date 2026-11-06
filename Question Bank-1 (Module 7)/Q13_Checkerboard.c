/* Q13 - Checkerboard
 * Complete program: reads n from stdin, prints the pattern to stdout.
 */
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%c", (i + j) % 2 == 0 ? 'X' : 'O');
        printf("\n");
    }
    return 0;
}
