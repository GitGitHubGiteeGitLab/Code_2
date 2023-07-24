/*************************************************************************
	> File Name: bubble_sort.c
	> Author: 
	> Mail: 
	> Created Time: Mon 24 Jul 2023 07:13:42 PM CST
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
		for (int j = 0; j < sz - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				arr[j] += arr[j + 1];
				arr[j + 1] = arr[j] - arr[j + 1];
				arr[j] -= arr[j + 1];
			}
		}
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

