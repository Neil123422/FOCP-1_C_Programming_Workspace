/* LeetCode 2169 - Count Operations to Obtain Zero
 * Submit: only the countOperations() function.
 */
#include <stdio.h>

int countOperations(int num1, int num2) {
    int ops = 0;
    while (num1 != 0 && num2 != 0) {
        if (num1 >= num2) num1 -= num2;
        else              num2 -= num1;
        ops++;
    }
    return ops;
}


int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", countOperations(a, b));
    return 0;
}
