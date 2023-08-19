int cmp(const int* restrict p, const int* restrict q) {
    if (*p < *q) {
        return -1;
    }
    else if (*p == *q) {
        return 0;
    }
    else {
        return 1;
    }
}

int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    int* arr = (int*)malloc(sizeof(int) * 2);
    qsort(nums, numsSize, sizeof(int), cmp);
    int prev = 0;
    for (int i = 0; i < numsSize; i++) {
        int cur = nums[i];
        if (cur == prev) {
            arr[0] = prev;
            *returnSize = 2;
        }
        else if (cur - prev == 2) {
            arr[1] = prev + 1;
        }
        prev = cur;
    }
    if (nums[numsSize - 1] != numsSize)arr[1] = numsSize;
    return arr;
}