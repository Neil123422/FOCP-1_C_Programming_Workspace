#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int values[10000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int current = 1, longest = 1;
    for (int i = 1; i < n; i++) {
        if (values[i] > values[i - 1]) {
            current++;
            if (current > longest) {
                longest = current;
            }
        } else {
            current = 1;
        }
    }

    printf("%d\n", longest);
    return 0;
}
