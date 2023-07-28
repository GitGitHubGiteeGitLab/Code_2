/*************************************************************************
	> File Name: NumberOf1_3.c
	> Author: 
	> Mail: 
	> Created Time: Fri 28 Jul 2023 06:28:58 PM CST
 ************************************************************************/

#include<stdio.h>

int NumberOf1(unsigned int n ) {
    int count = 0;
    while(n){
        n &= (n - 1);
        count++;
    }
    return count;
}
