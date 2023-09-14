int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    //前缀之积，后缀之积,用动归，空间复杂度为O(1) : j

    int* ans = (int*)malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    *ans = 1;
    for (int i = 1, j = 1; i < numsSize; i++) {
        j *= nums[i - 1];
        ans[i] = j;
    }

    for (int i = numsSize - 2, j = 1; ~i; i--) {
        j *= nums[i + 1];
        ans[i] *= j;
    }
    return ans;
}