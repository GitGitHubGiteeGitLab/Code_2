#include<stdio.h>
#include<assert.h>
/**
 * @brief: mstrstr是在str1中查找是否有子串str2
 * @param str1 : const char *
 * @param str2 : const char *
 * @return: const char *
*/

const char * mstrstr(const char* str1, const char* str2){
    assert(str1 && str2);
    const char* s1 = str1;
    const char* s2 = str2;
    while(*str1 != '\0'){
        s1 = str1;
        while(*s1 == *s2 && *s1 != '\0' && *s2 != '\0'){
            s1++;
            s2++;
        }
        if(*s2 == '\0')return str1;
        s2 = str2;
        str1++;
    }
    return NULL;
}


int main(int argc, char const *argv[])
{
    printf("%s\n", mstrstr("hellobbbcfe", "bbc"));
    const char *ch = mstrstr("hellobbbcfe", "bdc"); 
    if(ch == NULL){
        printf("Not found\n");
    }
    return 0;
}
