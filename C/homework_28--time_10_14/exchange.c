#include<stdio.h>

#define SWAP(n)\
{                                   \
    for(int i = 31; i >= 0; i -= 2){ \
        int bit1 = (n >> i) & 1; \
        int bit2 = (n >> (i - 1)) & 1;\
        int bit3 = bit1 << i;\
        int bit4 = bit2 << i;\
        n = n ^ bit3 ^ bit4;\
        bit3 = bit1 << (i - 1);\
        bit4 = bit2 << (i - 1);\
        n = n ^ bit3 ^ bit4;\
   }\
}
                           


void print(int n){
    for(int i = 31; i >=0; i--){
        if((i + 1) % 8 == 0 && (i + 1 != 32))
            putchar(' ');
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }   
    printf("\n");
}

int main(){
    while(1){
        int n;
        scanf("%d", &n);
        print(n);
        SWAP(n);
        print(n); 
    }
    return 0;
}
