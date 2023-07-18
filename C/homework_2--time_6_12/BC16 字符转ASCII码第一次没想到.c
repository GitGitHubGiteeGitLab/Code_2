#include <stdio.h>

int main() {
    char ch;
    ch = getchar();//scanf("%c", &ch);//两种获取字符输入的方式，字符ch的格式控制符是%c
    printf("%hhd", ch);//字符在计算机内部以二进制形式存储，格式控制符%hhd会将字符ch转换成表示它的数字
    return 0;
}