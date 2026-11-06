/* LeetCode 9 - Palindrome Number
 * Submit: only the isPalindrome() function (stdbool.h is already available on LeetCode).
 */
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0) return false;
    long long original = x, rev = 0;
    while (x > 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return rev == original;
}


int main(void) {
    int x;
    scanf("%d", &x);
    printf("%s\n", isPalindrome(x) ? "true" : "false");
    return 0;
}
