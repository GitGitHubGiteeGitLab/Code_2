/*************************************************************************
	> File Name: NumberOf1_2.c
	> Author: 
	> Mail: 
	> Created Time: Fri 28 Jul 2023 06:17:30 PM CST
 ************************************************************************/

#include<stdio.h>


int NumberOf1(unsigned int n ) {//unsigned能让负数也可以这么做,变负为正
    int  count = 0;
    while(n){
        /*
         * if(n % 2 == 1)count++;
         * n /= 2;
         */
        if(n & 1)count++;
        n >>= 1;
    }
    return count;
}
