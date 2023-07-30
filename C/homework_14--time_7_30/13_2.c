/*************************************************************************
	> File Name: 13.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Jul 2023 11:16:30 AM CST
 ************************************************************************/

#include<stdio.h>

int S(int a, int n){
    int sum = a, x = a;
    for(int i = 0; i < n - 1; i++){
        x = x * 10 + a;
        sum += x;
    }
    return sum;
}

int main(){
    int a, n;
    while(~scanf("%d %d", &a, &n))printf("%d\n", S(a, n));
    return 0;
}
