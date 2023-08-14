int* printNumbers(int n, int* returnSize) {
    // write code here
    *returnSize = pow(10, n) - 1;
    int* arr = (int*)malloc(sizeof(int) * (*returnSize));
    for (int i = 1; i <= *returnSize; i++) {
        arr[i - 1] = i;
    }
    return arr;
}