/*************************************************************************
	> File Name: bubble_sort_2.c
	> Author: 
	> Mail: 
	> Created Time: Fri 28 Jul 2023 07:26:05 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int* init(int n){
    int *arr = malloc(sizeof(int) * n);
    return arr;
}

void print(int *arr, int sz){
    printf("\033[32m:[");
    for(int i = 0; i < sz; i++){
        i && printf(" ");
        printf("%d", arr[i]);
    }
    printf("]\n\033[0m");
    return;
}


void bubble_sort(int* arr, int sz) {
	for (int i = 0; i < sz; i++) {
		int flag = 0;
        for (int j = 0; j < sz - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				arr[j] += arr[j + 1];
				arr[j + 1] = arr[j] - arr[j + 1];
				arr[j] -= arr[j + 1];
                flag = 1;
			}
		}
	    if(!flag)break;//没交换说明已排好
    }
	return;
}

int main() {
    srand(time(NULL));
    int n, *arr;
    printf("Input value of n:");
    scanf("%d", &n);
	for (int i = 0; i < 10; i++) {
	    arr[i] = rand() % 100;
    }
    printf("ArryNotSort:");
	print(arr, n);
    bubble_sort(arr, n);
    printf("Bubble_sort:");
    print(arr, n);
    return 0;
}


