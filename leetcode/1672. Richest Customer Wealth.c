#include <stdio.h>

int maximumWealth(int accounts[][100], int accountsSize, int accountsColSize) {
    int richest = 0;
    for (int i = 0; i < accountsSize; i++) {
        int total = 0;
        for (int j = 0; j < accountsColSize; j++) total += accounts[i][j];
        if (total > richest) richest = total;
    }
    return richest;
}

int main(void) {
    int r, c;
    scanf("%d %d", &r, &c);
    int accounts[100][100];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) scanf("%d", &accounts[i][j]);
    }
    printf("%d\n", maximumWealth(accounts, r, c));
    return 0;
}
