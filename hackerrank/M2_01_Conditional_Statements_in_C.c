/* HackerRank - Conditional Statements in C
 * Full stdin/stdout program: submit as is.
 */
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    const char *words[] = {"", "one", "two", "three", "four", "five",
                           "six", "seven", "eight", "nine"};
    if (n >= 1 && n <= 9)
        printf("%s\n", words[n]);
    else
        printf("Greater than 9\n");
    return 0;
}
