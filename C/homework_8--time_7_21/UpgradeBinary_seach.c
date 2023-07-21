/*************************************************************************
	> File Name: UpgradeBinary_seach.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Jul 2023 08:43:04 PM CST
 ************************************************************************/

#include<stdio.h>
//升序数组
int binary_search(int *arr, int n, int val){
    int head = 0, tail = n - 1, mid = 0;
    while(head <= tail){
       mid = head + ((tail - head) >> 1);
        // mid = head + (tail - head) / 2;//防溢出
        if(arr[mid] == val)return mid;
        else if(arr[mid] < val)head = mid + 1;
        else tail = mid - 1;
        printf("head == %d , tail == %d\n", head, tail);
    }
    return -1;
}

int main(){
    int arr[] = {5, 14, 18, 24, 37, 78, 98, 100, 152};
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    int n;
    scanf("%d", &n);
    printf("find = %d\n", binary_search(arr, sizeof(arr) / sizeof(arr[0]), n));
    return 0;
}
