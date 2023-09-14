int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    //ǰ׺֮������׺֮��,�ö��飬�ռ临�Ӷ�ΪO(1) : j

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