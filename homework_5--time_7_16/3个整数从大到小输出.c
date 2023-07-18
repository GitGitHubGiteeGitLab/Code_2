#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a > b){
       a += b;
       b = a - b;
       a -= b;
    }else if(b > c){
       c += b;
       b = c - b;
       c -= b;
    }
    if(a > b){
       a += b;
       b = a - b;
       a -= b;
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}