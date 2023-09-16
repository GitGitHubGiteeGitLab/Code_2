#include <stdio.h>

/**
 * @brief:三种方式模拟实现strlen
 * @param:const char *str
 * @return: size_t
*/



/**
 * @brief:计数器模拟实现
*/

size_t mstrlen_one(const char* str){
    size_t count = 0;
    while(*str++ != 0)count++;
    return count;
}

/**
 * @brief:递归实现
*/

size_t mstrlen_two(const char* str){
    if(*str == '\0')return 0;
    else return 1 + mstrlen_two(str + 1);
}


/**
 * @brief:指针相减
*/

size_t mstrlen_three(const char* str){
    char* p = str;
    char* q = str;
    while(*p != '\0')p++;
    return p - q;
}



int main(){
    char *str = "asfjld";
    printf("%zd\n", mstrlen_one(str));
    printf("%zd\n", mstrlen_two(str));
    printf("%zd\n", mstrlen_three(str));
}