/*
快排后，多数元素必定都凑在一起，而且因为多数元素的占比必定过半，所以数组正中间的元素一定是这个多数元素（可以自己画个占比的数轴，一看就懂）
*/

int cmp(int* a, int* b) {
    return *a - *b;
}
int majorityElement(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    return nums[numsSize / 2];
}