int findPeakElement(int* nums, int numsLen) {
    // write code here
    int left = 0, right = numsLen - 1, mid = 0;
    while (left < right) {
        mid = left + (right - left) / 2;
        //右边是往下，不一定有坡峰
        if (nums[mid] > nums[mid + 1])right = mid;
        //右边是往上，一定能找到波峰
        else left = mid + 1;
    }
    return left;
}