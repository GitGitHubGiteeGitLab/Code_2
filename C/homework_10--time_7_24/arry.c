/*************************************************************************
	> File Name: arry.c
	> Author: 
	> Mail: 
	> Created Time: Mon 24 Jul 2023 06:27:18 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int* init(int n){
    int *arr = malloc(sizeof(int) * n);
    return arr;
}
void print(int *arr, int sz){
    printf("\033[32mArry:[");
    for(int i = 0; i < sz; i++){
        i && printf(" ");
        printf("%d", arr[i]);
    }
    printf("]\n\033[0m");
    return;
}

void reverse(int *arr, int start, int end){
    if(start >= end)return;
    int tmp = arr[start];
    arr[start] = arr[end];
    arr[end] = tmp;
    reverse(arr, start + 1, end -1);
    return;
}

int main(){
    srand(time(NULL));
    int n;
    printf("Input value of n-> ");
    scanf("%d", &n);
    int *arr = init(n);
    for(int i = 0; i < n; i++){
        arr[i] = rand() % 100;
    }
    print(arr, n);
    reverse(arr, 0, n - 1);
    print(arr, n);
    return 0;
}
