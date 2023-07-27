/*************************************************************************
	> File Name: 统计二进制中1的个数.c
	> Author: 
	> Mail: 
	> Created Time: Thu 27 Jul 2023 10:08:18 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n, count = 0;
    scanf("%d", &n);
    for(int i = 31; ~i; i--){
        int bit = (n >> i) & 1;
        if(bit)count++;
        printf("%d", bit);
    }
    printf("\n%d\n", count);
    return 0;
}
