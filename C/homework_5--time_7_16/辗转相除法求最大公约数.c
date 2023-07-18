#include<stdio.h>

int main(){
    int a, b, t;
    scanf("%d%d", &a, &b);
    //余数最终为0
    while(b != 0){
        t = a % b;
        a = b;
        b = t;
    }
    printf("%d\n", a);
    return 0;
}