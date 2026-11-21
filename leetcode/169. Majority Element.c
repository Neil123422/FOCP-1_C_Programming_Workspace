#include <stdio.h>

int majorityElement(int nums[], int numsSize) {
    int candidate = 0, count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (count == 0) candidate = nums[i];
        count += nums[i] == candidate ? 1 : -1;
    }
    return candidate;
}

int main(void) {
    int n;
    scanf("%d", &n);
    int nums[1000];
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
    printf("%d\n", majorityElement(nums, n));
    return 0;
}
