int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int n = nums1Size > nums2Size ? nums2Size : nums1Size;
    int* intersection = malloc(sizeof(int) * n);
    *returnSize = 0;
    for (int i = 0; i < nums1Size; i++) {
        for (int j = 0; j < nums2Size; j++) {
            if (nums1[i] != nums2[j])continue;
            int flag = 0;
            for (int k = 0; k < *returnSize; k++) {
                if (intersection[k] != nums1[i])continue;
                flag = 1;
                break;
            }
            if (flag)break;
            intersection[*returnSize] = nums1[i];
            (*returnSize)++;
        }
    }
    return intersection;
}