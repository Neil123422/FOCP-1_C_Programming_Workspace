#include <stdio.h>

int containsDuplicate(int nums[], int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] == nums[j]) return 1;
        }
    }
    return 0;
}

int main(void) {
    int n;
    scanf("%d", &n);
    int nums[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("%d\n", containsDuplicate(nums, n));
    return 0;
}
