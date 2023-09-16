#include<stdio.h>
#include<assert.h>

/**
 * @param source: const char*
 * @return char *
*/

char* mstrcpy(char* destination, const char* source){
    assert(destination && source);
    char* ret = destination;
    while(*destination++ = *source++);//对赋值表达式求值
    return ret;
}

int main(){
    char str1[20] = {'1','1','1','1','1','1','1','1','1','1','1','1','1','\0'};
    const char *str2 = "hello";
    printf("%s\n", mstrcpy(str1, str2));
}