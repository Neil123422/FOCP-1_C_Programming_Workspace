/* LeetCode 2520 - Count the Digits That Divide a Number
 * Submit: only the countDigits() function.
 */
#include <stdio.h>

int countDigits(int num) {
    int count = 0, temp = num;
    while (temp > 0) {
        int d = temp % 10;          /* num has no zero digits per constraints */
        if (num % d == 0) count++;
        temp /= 10;
    }
    return count;
}


int main(void) {
    int num;
    scanf("%d", &num);
    printf("%d\n", countDigits(num));
    return 0;
}
