int removeDuplicates(int* nums, int numsSize){
    if(numsSize == 0)return 0;
    int cnt = 0;
    for(int i = 1; i < numsSize; i++){
        if(nums[cnt] == nums[i])continue;
        nums[++cnt] = nums[i]; //++cnt即可，idx == 0不需要改变
    }
    return cnt + 1;
}