#include<stdio.h>
﻿#define MAX_N 50

size_t mstrlen1(char* str) {
    if (!(*str))return 0;
    //++str风险大，回来str变了
    return 1 + mstrlen(str + 1);//str没变
}

int main() {
    char str[MAX_N];
    scanf("%s", str);
    size_t len = mstrlen(str);
    printf("%zd\n", len);
    return 0;
}