/*
���ź󣬶���Ԫ�رض�������һ�𣬶�����Ϊ����Ԫ�ص�ռ�ȱض����룬�����������м��Ԫ��һ�����������Ԫ�أ������Լ�����ռ�ȵ����ᣬһ���Ͷ���
*/

int cmp(int* a, int* b) {
    return *a - *b;
}
int majorityElement(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    return nums[numsSize / 2];
}