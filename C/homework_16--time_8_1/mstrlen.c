/*************************************************************************
	> File Name: mstrlen.c
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Aug 2023 07:35:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<assert.h>

size_t mstrlen(const char *str){
    size_t count = 0;
    assert(str);
    while(*str++){
        count++;
    }
    return count;
}

int main(){
    char str[30];
   while(~ scanf("%[^\n]s", str)){
        printf("strlen  = %zd\n", strlen(str));
        printf("mstrlen = %zd\n", mstrlen(str));
        printf("\n");
        getchar();
    }
}
