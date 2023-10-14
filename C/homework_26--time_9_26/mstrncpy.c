#include<stdio.h>
#include<assert.h>

char* mstrncpy(char *destination, const char* source, size_t num){
    assert(destination && source);

    char *ret = destination;
    
    while(num-- > 0){
        if((*destination++ = *source++) == '\0')
            break;
    }
    return ret;
}

int main(){
    char dest[] = "hello";
    mstrncpy(dest, "bigsum", 10);
    printf("%s", dest);
    return 0;
}