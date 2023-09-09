int pivotIndex(int* nums, int numsSize) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < numsSize; i++) {
        if (i != 0)sum1 += nums[i - 1];
        for (int j = i + 1; j < numsSize; j++) {
            sum2 += nums[j];
        }
        if (sum1 == sum2) {
            return i;
        }
        sum2 = 0;
    }
    return -1;
}