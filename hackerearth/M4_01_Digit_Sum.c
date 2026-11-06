/* HackerEarth - Digit Sum
 * Full stdin/stdout program. Reads the number as text so even very large
 * values work. VERIFY the input format on the problem page (single number assumed).
 */
#include <stdio.h>

int main(void) {
    int c, sum = 0, started = 0;
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') { sum += c - '0'; started = 1; }
        else if (started) break;      /* stop at end of first number */
    }
    printf("%d\n", sum);
    return 0;
}
