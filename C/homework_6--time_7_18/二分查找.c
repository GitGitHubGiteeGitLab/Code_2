#include <stdio.h>
//二分查找
int binarySearch(int* arr, int left, int right, int goal) {
    int mid = 0;
    if (arr[left] > arr[right]) {
        while (left <= right) {
            mid = (left + right) / 2;
            if (arr[mid] > goal) {
                left = mid + 1;
            }
            else if (arr[mid] < goal) {
                right = mid - 1;
            }
            else {
                return mid;
            }
        }
    }
    else if (arr[left] < arr[right]) {
        while (left <= right) {
            mid = (left + right) / 2;
            if (arr[mid] > goal) {
                right = mid - 1;
            }
            else if (arr[mid] < goal) {
                left = mid + 1;
            }
            else {
                return mid;
            }
        }
    }
    else {
        if (arr[left] == goal)return 10;
        return -1;
    }
    return -1;
}

int main() {
    int arr[10] = { 0 }, goal, left, right;
    printf("按由小到大或由大到到小输入十个整数：");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    left = 0, right = sizeof(arr) / sizeof(arr[0]) - 1;
    printf("查找数字：");
    scanf("%d", &goal);
    int ret = binarySearch(arr, left, right, goal);
    if (ret == 10) {
        printf("下标0~9均符合要求\n");
    }
    else if (ret == -1) {
        printf("没有找到\n");
    }
    else {
        printf("下标是%d\n", ret);
    }
    return 0;
}