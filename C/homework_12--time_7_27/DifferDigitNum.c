/*************************************************************************
	> File Name: DifferDigitNum.c
	> Author: 
	> Mail: 
	> Created Time: Thu 27 Jul 2023 10:50:32 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to
        int differ = 0;
        for(int i = 31; ~i ; i--){
            differ += ((a >> i) & 1) ^ ((b >> i) & 1);
        }
        printf("%d\n", differ);
    }
    return 0;
}
