#include <stdio.h>

int maxOfThree(int a, int b, int c) {
    int largest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }
    return largest;
}

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", maxOfThree(a, b, c));
    return 0;
}
