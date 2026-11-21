#include <stdio.h>

void merge(int nums1[], int nums1Size, int m, int nums2[], int nums2Size, int n) {
    int i = m - 1, j = n - 1, writeIndex = m + n - 1;
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) nums1[writeIndex--] = nums1[i--];
        else nums1[writeIndex--] = nums2[j--];
    }
    while (j >= 0) nums1[writeIndex--] = nums2[j--];
}

int main(void) {
    int m, n;
    scanf("%d %d", &m, &n);
    int nums1[2000] = {0}, nums2[1000];
    for (int i = 0; i < m; i++) scanf("%d", &nums1[i]);
    for (int i = 0; i < n; i++) scanf("%d", &nums2[i]);

    merge(nums1, m + n, m, nums2, n, n);
    for (int i = 0; i < m + n; i++) {
        printf("%d%c", nums1[i], i == m + n - 1 ? '\n' : ' ');
    }
    return 0;
}
