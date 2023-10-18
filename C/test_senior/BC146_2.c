#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 20
int main(){
    char str[N];
    scanf("%s", &str);
    int len = strlen(str);
    for(int i = 1; i <= len; i++){
        putchar(str[i - 1]);
        //输出了i个数，检查剩余的数是否是3的倍数且不是最后一个数字
        if((len - i) % 3 ==0 && i != len)
            putchar(',');
    }
    return 0;
}
