int dominantIndex(int* nums, int numsSize) {
    int M1 = 0, M2 = 0, index = -1;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > M1) {
            M2 = M1;//M2��һ����Դ
            M1 = nums[i];
            index = i;
        }
        else if (nums[i] > M2) {
            M2 = nums[i];//M2����һ����Դ
        }
    }
    return ((M1 >= 2 * M2) ? index : -1);
}