int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* ret = calloc((numsSize + 1), sizeof(int));
    *returnSize = 0;
    //��������ɸ��˼�룺���
    for (int i = 0; i < numsSize; i++) {
        ret[nums[i]] = 1;
    }
    for (int i = 1; i <= numsSize; i++) {
        if (ret[i] == 0) {
            ret[(*returnSize)++] = i;
        }
    }
    return ret;
}