/*************************************************************************
	> File Name: DifferDigitNum_2.c
	> Author: 
	> Mail: 
	> Created Time: Fri 28 Jul 2023 07:34:35 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b;
    while (~scanf("%d %d", &a, &b) ) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to
        int c = a ^ b;
        int differ = 0;
        while(c){
            c &= c - 1;
            differ++;
        }
        printf("%d\n", differ);
    }
    return 0;
}
