#include<stdio.h>
#include<string.h>

void find(int *arr, size_t sz, int *ret1, int *ret2){
    int a[sz], b[sz];
    memset(b, 0, sz * 4);
    int flag = 0;
    for(int i = 0; i < sz; i++){
        a[i] = arr[i];
        for(int j = 0; j < sz; j++){
            if(i == j)continue;
            if(a[i] == arr[j])b[i]++;
        }//forj
        if(b[i] == 0 && flag == 0){
            *ret1 = a[i];
            flag = 1;
            b[i] = 1;//不加这一句会直接执行下一个条件
        }
        if(b[i] == 0 && flag == 1){
            *ret2 = a[i];
            return;
        }
    }//fori
    return;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 6};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret1 = 0, ret2 = 0;
    find(arr, sz, &ret1, &ret2);
    printf("%d %d", ret1, ret2);
    return 0;
}