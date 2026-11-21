#include <stdio.h>

int findNumbers(int nums[], int numsSize) {
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        int digits = 0;
        for (int value = nums[i]; value > 0; value /= 10) digits++;
        if (digits % 2 == 0) count++;
    }
    return count;
}

int main(void) {
    int n;
    scanf("%d", &n);
    int nums[1000];
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
    printf("%d\n", findNumbers(nums, n));
    return 0;
}
