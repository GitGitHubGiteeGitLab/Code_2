/*************************************************************************
	> File Name: 10.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Jul 2023 10:43:20 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define N 10000
int main(){
    char str[N] = {0};
    scanf("%[^\n]s", str);
    for(int i = strlen(str) - 1; ~i;i--){
        putchar(str[i]);
    }
    return 0;
}
