/*************************************************************************
	> File Name: swap.c
	> Author: 
	> Mail: 
	> Created Time: Thu 27 Jul 2023 09:57:41 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int a = 2, b = 3, c = -1, d = -2, e = 5, f = -9;
    printf("Before swap:\na = %d, b = %d\nc = %d, d = %d\ne = %d, f = %d\n", a, b, c, d, e, f);
    a ^= b; b ^= a; a ^= b;
    c ^= d; d ^= c; c ^= d;
    e ^= f; f ^= e; e ^= f;
    printf("After swap :\na = %d, b = %d\nc = %d, d = %d\ne = %d, f = %d\n", a, b, c, d, e, f);
    return 0;
}

