#include <stdio.h>

int removeDuplicates(int nums[], int numsSize) {
    if (numsSize == 0) return 0;
    int writeIndex = 1;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[writeIndex++] = nums[i];
        }
    }
    return writeIndex;
}

int main(void) {
    int n;
    scanf("%d", &n);
    int nums[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int length = removeDuplicates(nums, n);
    printf("%d\n", length);
    for (int i = 0; i < length; i++) {
        printf("%d%c", nums[i], i == length - 1 ? '\n' : ' ');
    }
    return 0;
}
