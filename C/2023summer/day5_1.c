int GetNumberOfK(int* nums, int numsLen, int k) {
    // write code here
    int cnt = 0;
    for (int i = 0; i < numsLen; i++) {
        if (nums[i] == k)cnt++;
    }
    return cnt;
}