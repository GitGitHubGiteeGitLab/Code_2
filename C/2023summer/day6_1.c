int dominantIndex(int* nums, int numsSize) {
    int M1 = 0, M2 = 0, index = -1;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > M1) {
            M2 = M1;//M2的一种来源
            M1 = nums[i];
            index = i;
        }
        else if (nums[i] > M2) {
            M2 = nums[i];//M2的另一种来源
        }
    }
    return ((M1 >= 2 * M2) ? index : -1);
}