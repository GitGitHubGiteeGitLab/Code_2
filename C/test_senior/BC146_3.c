#include<stdio.h>

void douHao(int n){
    if(n < 1000){
        printf("%d", n);
    }
    else{
        douHao(n / 1000);
        printf(",%03d", n % 1000);
    }
    return ;
}

int main(){
    int n;
    scanf("%d", &n);
    douHao(n);
}
