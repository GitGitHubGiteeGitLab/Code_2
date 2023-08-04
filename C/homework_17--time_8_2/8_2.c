/*************************************************************************
	> File Name: 8_2.c
	> Author: 
	> Mail: 
	> Created Time: Fri 04 Aug 2023 10:08:26 AM CST
 ************************************************************************/

#include<stdio.h>
#define N 30
void yTriangle(int n){
    int arr[N][N] = {1};//arr[0][0]初始化为1,其余为0
    for(int i = 0; i < n; i++){
        arr[i][0] = 1;//每行第一为1
        for(int j = 0; j <= i; j++){
            if(i)arr[i][j] = arr[i-1][j-1] + arr[i-1][j];//到边界也无需担心，因为上一行同列为0
            j && putchar(' ');
            printf("%2d", arr[i][j]);
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

