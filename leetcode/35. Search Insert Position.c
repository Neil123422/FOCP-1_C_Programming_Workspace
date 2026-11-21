#include <stdio.h>

int searchInsert(int nums[], int numsSize, int target) {
    int low = 0, high = numsSize - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) return mid;
        if (nums[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return low;
}

int main(void) {
    int n, target;
    scanf("%d %d", &n, &target);
    int nums[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("%d\n", searchInsert(nums, n, target));
    return 0;
}
