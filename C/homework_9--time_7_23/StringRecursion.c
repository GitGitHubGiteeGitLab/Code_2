#include<stdio.h>
﻿#define MAX_N 50

char* reverse_string(char* string) {
    char ch = *string;
    if (*(string + 1) == '\0')return string;//递归出口
    //递归过程
    char* str = reverse_string(string + 1);
    //处理过程
    while (*str) {
        *(str - 1) = *str;
        str++;
    }
    *(str - 1) = ch;
    return string;//结果返回
}

int main() {
    char string[MAX_N];
    scanf("%s", string);
    char* str = reverse_string(string);
    printf("%s", str);
    return 0;
}