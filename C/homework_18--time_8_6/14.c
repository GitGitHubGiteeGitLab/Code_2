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

int is_reverseNth(char* str1, char* str2){
    int flag = 0;
    for(int i = 0, len = strlen(str1); i < len; i++){
        reverseNth(str1, 1);
        if(strcmp(str1, str2) != 0)continue;
        flag = 1;
    }
    return flag;
}

int main(){
    char str1[N + 5] = {0}, str2[N + 5] = {0};
    while(1){
        scanf("%[^\n]", str1);
        getchar();
        scanf("%[^\n]", str2);
        getchar();
        if(is_reverseNth(str1, str2)){
            puts("Yes");
        }else{
            puts("No");
        }
    }
    return 0;
}
