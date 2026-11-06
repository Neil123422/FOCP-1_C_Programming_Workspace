/* HackerRank - Find Digits
 * Submit: only the findDigits() function (HackerRank supplies main and I/O).
 */
#include <stdio.h>

int findDigits(int n) {
    int count = 0, temp = n;
    while (temp > 0) {
        int d = temp % 10;
        if (d != 0 && n % d == 0) count++;   /* counts repeated digits too */
        temp /= 10;
    }
    return count;
}


int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", findDigits(n));
    }
    return 0;
}
