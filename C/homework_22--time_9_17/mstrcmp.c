#include<stdio.h>
#include<assert.h>
int mstrcmp(const char* str1, const char* str2){
    assert(str1 && str2);

    while(*str1 && *str2 && *str1 == *str2){
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main(int argc, char const *argv[])
{   
    int ret = mstrcmp("hello", "hello");
    if(ret == 0){
        printf("equal!\n");
    }else if(ret > 0){
        printf("first > second!\n");
    }else {
        printf("first < second!\n");
    }

    ret = mstrcmp("abc", "abcde");
    if(ret == 0){
        printf("equal!\n");
    }else if(ret > 0){
        printf("first > second!\n");
    }else {
        printf("first < second!\n");
    }

    ret = mstrcmp("adc", "abcde");
    if(ret == 0){
        printf("equal!\n");
    }else if(ret > 0){
        printf("first > second!\n");
    }else {
        printf("first < second!\n");
    }
    return 0;
}
