#include <stdio.h>

int digitSum(int value) {
    int sum = 0;
    while (value > 0) {
        sum += value % 10;
        value /= 10;
    }
    return sum;
}

int main(void) {
    int n;
    scanf("%d", &n);

    int values[10000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (digitSum(values[i]) == digitSum(values[j])) {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
