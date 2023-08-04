/*************************************************************************
	> File Name: 6.c
	> Author: 
	> Mail: 
	> Created Time: Thu 03 Aug 2023 04:43:47 PM CST
 ************************************************************************/

#include<stdio.h>

int check(int *arr, int n){
    int temp = 0;
    for(int i = 0; i < n; i++){
        temp |= 1 << arr[i];//1 << p[i] 是将二进制数1左移 p[i] 位的操作。例如，如果 p[i] 的值为3，那么 1 << 3 的结果是二进制数 0b1000，即十进制数8。
    }
    return temp != 0x3e;//12345都有就是0b111110,62
}


int main(){
    int arr[5];
    //穷举，名次有重复要判断，利用条件表达式返回值来做控制条件
    for(arr[0] = 1; arr[0] <= 5; arr[0]++){
        for(arr[1] = 1; arr[1] <= 5; arr[1]++){
            for(arr[2] = 1; arr[2] <= 5; arr[2]++){
                for(arr[3] = 1; arr[3] <= 5; arr[3]++){
                    for(arr[4] = 1; arr[4] <= 5; arr[4]++){
                        if(check(arr, 5))continue;
                        if((arr[1] == 3) + (arr[0] == 3) == 1 &&
                           (arr[1] == 2) + (arr[4] == 4) == 1 &&
                           (arr[2] == 1) + (arr[3] == 2) == 1 &&
                           (arr[2] == 5) + (arr[3] == 3) == 1 &&
                           (arr[4] == 4) + (arr[0] == 1) == 1){
                               goto end;
                           }
                    }
                }
            }
        }
    }
    end:
    for(int i = 0; i < 5; i++){
        printf("%c: %d\n", 'A' + i, arr[i]);
    }
    return 0;
}
