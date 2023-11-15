int findPeakElement(int* nums, int numsLen) {
    // write code here
    int left = 0, right = numsLen - 1, mid = 0;
    while (left < right) {
        mid = left + (right - left) / 2;
        //�ұ������£���һ�����·�
        if (nums[mid] > nums[mid + 1])right = mid;
        //�ұ������ϣ�һ�����ҵ�����
        else left = mid + 1;
    }
    return left;
}