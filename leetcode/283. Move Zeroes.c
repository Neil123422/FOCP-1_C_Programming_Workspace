#include <stdio.h>

void moveZeroes(int nums[], int numsSize) {
    int writeIndex = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[writeIndex++] = nums[i];
        }
    }
    while (writeIndex < numsSize) {
        nums[writeIndex++] = 0;
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    int nums[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    moveZeroes(nums, n);
    for (int i = 0; i < n; i++) {
        printf("%d%c", nums[i], i == n - 1 ? '\n' : ' ');
    }
    return 0;
}
