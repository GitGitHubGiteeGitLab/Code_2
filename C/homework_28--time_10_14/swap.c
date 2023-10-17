#include<stdio.h>

#define SWAP_BIT(n) (n = (((n) & 0x55555555) << 1) | ((n) & 0xaaaaaaaa) >> 1)

int main(){
    while(1){
        int n;
        scanf("%d", &n);
        SWAP_BIT(n);
        printf("n = %d\n", n);
        SWAP_BIT(n);
        printf("n = %d\n\n", n);
    }   
}

