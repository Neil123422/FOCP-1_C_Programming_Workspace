/* LeetCode 507 - Perfect Number
 * Submit: only the checkPerfectNumber() function.
 */
#include <stdio.h>
#include <stdbool.h>

bool checkPerfectNumber(int num) {
    if (num <= 1) return false;
    int sum = 1;                          /* 1 is always a proper divisor */
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) sum += num / i;
        }
    }
    return sum == num;
}


int main(void) {
    int num;
    scanf("%d", &num);
    printf("%s\n", checkPerfectNumber(num) ? "true" : "false");
    return 0;
}
