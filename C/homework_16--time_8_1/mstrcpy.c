/*************************************************************************
	> File Name: mstrcpy.c
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Aug 2023 08:01:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
char *mstrcpy(char *des, const char* src){
    char *str = des;
    assert(des && src);
    while(*des++ = *src++);
    return str;
}


int main(){
    char str1[30] = {0}, str2[30] = {0};
    while(~scanf("%[^\n]s", str1)){
        printf("str1 : %s\n", str1);
        printf("str2 : %s\n", mstrcpy(str2, str1));
        printf("\n");
        getchar();
    }
}
