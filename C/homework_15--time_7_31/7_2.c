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
        int sum = 2 * money - 1;
        printf("sum = %d\n", sum);
    }
    return 0;
}
