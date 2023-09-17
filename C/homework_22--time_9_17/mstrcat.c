#include<stdio.h>
#include<assert.h>

char * mstrcat(char *str1, const char *str2){
    assert(str1 && str2);//断言str1 == NULL否，而不是判断*str == '\0'
    char *ret = str1;
    while(*str1 != '\0'){
        str1++;
    }

    while(*str1++ = *str2++);
    return ret;
}

int main(int argc, char const *argv[])
{
    char str1[] = "hello";
    const char *str2 = " world";
    printf("%s\n", mstrcat(str1, str2)); 
    return 0;
}
