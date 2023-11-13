int* twoSum(int* numbers, int numbersLen, int target, int* returnSize) {
    // write code here
    int* arr = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;
    //确保数组任意两个数加了一次
    for (int i = 0; i < numbersLen; i++) {
        //numbers[i]最小是-10
        if (numbers[i] > target + 10)
            continue;
        for (int j = 0; j < i; j++) {
            if (numbers[i] + numbers[j] == target) {
                arr[0] = j + 1;
                arr[1] = i + 1;
                return arr;
            }
        }
    }
    return arr;
}