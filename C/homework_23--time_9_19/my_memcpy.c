#include<stdio.h>
#include<assert.h>

void *my_memcpy(void *dest, const void *src, size_t sz){
    void *ret = dest;
    assert(dest && src);

    while(sz-- > 0){
        *(char *)dest = *(char *)src;
        dest = (char *)dest + 1;
        src = (char*)src + 1;
    }
    return ret;
}

int main(){
    char s1[] = "hello world";
    const char *s2 = "xxx";
    my_memcpy(s1 + 6, s2, 3);
    printf("%s\n", s1);
}