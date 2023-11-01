//逆序比较最大，不会覆盖，原地修改，空间复杂度O(m+n)
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int i1 = m - 1;
    int i2 = n - 1;
    int j =  m + n -1;
		//循环写的是继续的条件，我们想的是结束的条件，两者不同
    while(i1 >= 0 && i2 >= 0){
        if(nums1[i1] > nums2[i2])nums1[j--] = nums1[i1--];
        else nums1[j--] = nums2[i2--];
    }
    //i2 < 0结束不需要继续操作
    if(i2 >= 0){
        while(i2 >= 0){
            nums1[j--] = nums2[i2--];
        }
    }
    return;
}