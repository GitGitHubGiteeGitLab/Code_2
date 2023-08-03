/*************************************************************************
	> File Name: 8.c
	> Author: 
	> Mail: 
	> Created Time: Thu 03 Aug 2023 04:56:57 PM CST
 ************************************************************************/

#include<stdio.h>



void yTriangle(int n){
    int arr[n][n];
    int fac[n];
    fac[0] = 1;
    for(int i = 1; i < n; i++){
        fac[i] = i * fac[i-1]; 
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            arr[i][j] = fac[i] / (fac[j] * fac[i-j]);
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
