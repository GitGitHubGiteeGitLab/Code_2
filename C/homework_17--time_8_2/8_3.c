/*************************************************************************
	> File Name: 8_3.c
	> Author: 
	> Mail: 
	> Created Time: Fri 04 Aug 2023 10:17:25 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdio.h>
#define N 50

void yTriangle(int n){
    int arr[N] = {1};
    printf(" 1\n");//第一行直接打印
    for(int i = 1; i < n; i++){
        for(int j = i; j; j--){//从后往前，防止覆盖
            arr[j] +=  arr[j - 1];
            
        }
        for(int j = 0; j <= i; j++){
            j && putchar(' ');
            printf("%2d", arr[j]);
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    yTriangle(n);
    return 0;
}

