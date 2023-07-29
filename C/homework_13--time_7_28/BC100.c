#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *arr, int n){
    for (int i = 0; i < n - 1; i++){
        int flag = 0;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                flag = 1;
            }
        }
        if(!flag)return;
    }
}



int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int* arr = calloc(n + m, sizeof(int));

    for (int i = 0; i < n + m; i++) {
        scanf("%d", &arr[i]);
    }
    bubble_sort(arr, m + n);
    for (int j = 0; j < n + m; j++) {
        j&& putchar(32);
        printf("%d", arr[j]);
    }
}
