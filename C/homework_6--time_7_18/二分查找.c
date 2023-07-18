#include <stdio.h>
//���ֲ���
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
    printf("����С������ɴ󵽵�С����ʮ��������");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    left = 0, right = sizeof(arr) / sizeof(arr[0]) - 1;
    printf("�������֣�");
    scanf("%d", &goal);
    int ret = binarySearch(arr, left, right, goal);
    if (ret == 10) {
        printf("�±�0~9������Ҫ��\n");
    }
    else if (ret == -1) {
        printf("û���ҵ�\n");
    }
    else {
        printf("�±���%d\n", ret);
    }
    return 0;
}