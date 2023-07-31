/*************************************************************************
	> File Name: 7.c
	> Author: 
	> Mail: 
	> Created Time: Mon 31 Jul 2023 10:36:18 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int money;
    while(~scanf("%d", &money)){
        int sum = money;
        int empty = money;
        while(empty > 1){//只要大于一就可以继续换
            sum += empty >> 1;
            empty = (empty >> 1) + (empty & 1);
        }
        printf("sum = %d\n", sum);
    }
    return 0;
}
