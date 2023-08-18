int minNumberInRotateArray(int* nums, int numsLen) {
    // write code here
    int left = 0, right = numsLen - 1, mid;
    while (left < right) {
        mid = left + (right - left) / 2;
        if (nums[mid] < nums[right]) right = mid;
        else if (nums[mid] > nums[right])left = mid + 1;
        else right -= 1;//É¾³ıÖØ¸´
    }
    return nums[left];
}