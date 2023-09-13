int* selfDividingNumbers(int left, int right, int* returnSize) {
    int* ret = malloc(sizeof(int) * (right - left));
    *returnSize = 0;
    for (int i = left; i <= right; i++) {
        int j = i, temp = i, flg = 0;
        while (temp) {
            j = temp % 10;
            temp /= 10;
            if (j == 0)flg = 1;
            else if (i % j)flg = 1;
        }
        if (flg == 0) {
            ret[(*returnSize)++] = i;
        }
    }
    return ret;
}