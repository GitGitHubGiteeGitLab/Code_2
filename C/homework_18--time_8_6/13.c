/*************************************************************************
	> File Name: 13.c
	> Author: 
	> Mail: 
	> Created Time: Mon 07 Aug 2023 05:42:19 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define N 100

void reverseNth(char *str1, int k){
    int len = strlen(str1);
    if(k < 0 || k > len){
        printf("Invaild!\n");
        return;
    }
    char str2[N] = {0};
    strncpy(str2, str1, sizeof(char) * k);
    for(int i = k; i < len; i++){
        str1[i-k] = str1[i];
    } 
    for(int i = len - k, j = 0; i < len; ++i, ++j){
        str1[i] = str2[j];
    }
    return;
}

int main(){
    int k;
    char str[N + 5] = {0};
    while(scanf("%d %[^\n]", &k, str) == 2){
        reverseNth(str, k);
        puts(str);
    }
    return 0;
}
