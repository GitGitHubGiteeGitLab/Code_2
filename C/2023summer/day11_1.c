int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int maxcount = 0, count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 1) {
            count++;
            continue;
        }
        maxcount = maxcount > count ? maxcount : count;
        count = 0;
    }
    //防最后一个是1
    maxcount = maxcount > count ? maxcount : count;
    return maxcount;
}