#include <stdio.h>

int removeElement(int nums[], int numsSize, int val) {
    int writeIndex = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[writeIndex++] = nums[i];
        }
    }
    return writeIndex;
}

int main(void) {
    int n, val;
    scanf("%d %d", &n, &val);
    int nums[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int length = removeElement(nums, n, val);
    printf("%d\n", length);
    for (int i = 0; i < length; i++) {
        printf("%d%c", nums[i], i == length - 1 ? '\n' : ' ');
    }
    return 0;
}
