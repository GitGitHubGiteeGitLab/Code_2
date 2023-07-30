/*************************************************************************
	> File Name: 13.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Jul 2023 11:16:30 AM CST
 ************************************************************************/

#include<stdio.h>

int S(int n){
    int sum = n, x = n;
    for(int i = 0; i < 4; i++){
        x = x * 10 + n;
        sum += x;
    }
    return sum;
}

int main(){
    int a;
    while(~scanf("%d", &a))printf("%d\n", S(a));
    return 0;
}
