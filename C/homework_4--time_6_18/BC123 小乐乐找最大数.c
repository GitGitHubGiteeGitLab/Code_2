#include <stdio.h>

int main() {
    int a , b , c , d , max1 , max2;
    scanf("%d%d%d%d" , &a , &b , &c , &d);
    max1 = a > b ? a : b;
    max2 = c > d ? c : d;
    printf("%d" , max1 > max2 ? max1 : max2);
    return 0;
}