/*************************************************************************
	> File Name: OddEvenDigit.c
	> Author: 
	> Mail: 
	> Created Time: Thu 27 Jul 2023 10:39:48 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n, count1 = 0 ,count2 = 0;
    scanf("%d", &n);
    printf("Even:");
    for(int i = 31; i >= 0; i -= 2){
        int bit = (n >> i) & 1;
        if(bit)count1++;
        printf("%d", bit);
    }
    printf("\n%d\n", count1);
    printf("Odd:");
    for(int i = 30; i >= 0; i -= 2){
        int bit = (n >> i) & 1;
        if(bit)count2++;
        printf("%d", bit);
    }
    printf("\n%d\n", count2);
    return 0;
}

