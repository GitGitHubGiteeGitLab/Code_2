int* twoSum(int* numbers, int numbersLen, int target, int* returnSize) {
    // write code here
    int* arr = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;
    //ȷ��������������������һ��
    for (int i = 0; i < numbersLen; i++) {
        //numbers[i]��С��-10
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