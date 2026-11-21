/* LeetCode 1281 - Subtract the Product and Sum of Digits of an Integer
 * Submit: only the subtractProductAndSum() function.
 */
#include <stdio.h>

int subtractProductAndSum(int n) {
    int product = 1, sum = 0;
    while (n > 0) {
        int d = n % 10;
        product *= d;
        sum += d;
        n /= 10;
    }
    return product - sum;
}


int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d\n", subtractProductAndSum(n));
    return 0;
}
