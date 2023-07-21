/*************************************************************************
	> File Name: swap_two_number.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Jul 2023 07:09:17 PM CST
 ************************************************************************/

#include<stdio.h>

void swap(int *a, int *b){
    *a += *b;
    *b = *a - *b;
    *a -= *b;
    return;
}

int main(){
    int a, b;
    while(~scanf("%d%d", &a, &b)){
        printf("a = %d, b= %d\n", a, b);
        swap(&a, &b);
        printf("Swap: a = %d, b= %d\n", a, b);
    }
    return 0;
}
