/*************************************************************************
	> File Name: swap.c
	> Author: 
	> Mail: 
	> Created Time: Tue 25 Jul 2023 05:49:19 PM CST
 ************************************************************************/

#include<stdio.h>
//把交换数组变为交换两个数
void swap(int *arr1, int *arr2, int size){
    for(int i = 0; i < size; i++){
        arr1[i] += arr2[i];
        arr2[i]  = arr1[i] - arr2[i];
        arr1[i] -= arr2[i];
    }
}

int main(){
    int  arr1[10] = {18, 2, 23, 43, 54, 65, 75, 38, 94, 10};
    int  arr2[10] = {104, 9, 48, 57, 46, 53, 4, 43, 42, 14};
    for(int i = 0; i < 10; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", arr2[i]);
    }
    printf("\n");
    swap(arr1, arr2, 10);
    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", arr2[i]);
    }
    printf("\n");

    
}
