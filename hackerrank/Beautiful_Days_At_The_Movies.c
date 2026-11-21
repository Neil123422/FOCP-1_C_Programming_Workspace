#include <stdio.h>
#include <stdlib.h>

int reverseNumber(int value) {
    int reversed = 0;
    while (value > 0) {
        reversed = reversed * 10 + value % 10;
        value /= 10;
    }
    return reversed;
}

int main(void) {
    int start, end, divisor;
    scanf("%d %d %d", &start, &end, &divisor);

    int count = 0;
    for (int day = start; day <= end; day++) {
        int difference = abs(day - reverseNumber(day));
        if (difference % divisor == 0) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
