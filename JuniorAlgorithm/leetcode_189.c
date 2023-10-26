//没通过会超时, 37 / 38 个通过的测试用例
void rotate0(int* nums, int numsSize, int k){
    if(k == 0)return;
    rotate(nums, numsSize, k - 1);
    int m = nums[numsSize - 1];
    for(int i = numsSize - 1; i > 0; i--){
        nums[i] = nums[i - 1];
    }
    nums[0] = m;
    return;
}

void rotate1(int* nums, int numsSize, int k){
    //数组只有一个数或者不旋转或者旋转一个数组的大小，就没有必要继续处理
    if (k == 0 ||  k == numsSize || numsSize == 1)return;
    if(k > numsSize)k %= numsSize;

    int *memory = calloc(k, sizeof(int));
    for(int i = 0, j = numsSize - k; j < numsSize; i++, j++){
        memory[i] = nums[j];
    }
    for(int i = numsSize - k - 1; i >= 0; i--){
        nums[i + k] = nums[i];
    }
    for(int i = 0; i < k;i++){
        nums[i] =  memory[i];
    }
    return;
}

void rotate2(int* nums, int numsSize, int k) {
    //0 1 2 3 4 5 6  0 1 2 3 4 5 6  0 1 2 3 4 5 6
    //a b c d e f g
    //轮转后index = (轮转前index + 轮转数k) % numsSize
    //理解不了可以先k %= numsSize;
    k %= numsSize;//可有可无
    int arr[numsSize];
    for(int i = 0; i < numsSize; i++){
        arr[(i + k) % numsSize] = nums[i];
    }
    for(int i = 0; i < numsSize; i++){
        nums[i] = arr[i];
    }
}

void reverse3(int* left, int *right){
    while(left < right){
        int tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

void rotate(int* nums, int numsSize, int k) {
    // 1 2 3 4 5 6 7
    // 7 6 5 4 3 2 1
    // 5 6 7 4 3 2 1
    // 5 6 7 1 2 3 4
    k %= numsSize;
    if(k == 0)return;
    reverse(nums, nums+numsSize-1);
    reverse(nums, nums+k-1);
    reverse(nums+k, nums+numsSize-1);
}