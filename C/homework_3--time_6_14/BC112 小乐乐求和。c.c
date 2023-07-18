#include <stdio.h>

int main() {
    long long n;//int类型范围不够，要换更大的
    scanf("%lld",&n);
    printf("%lld",n*(n+1)/2);//高斯求和公式
    return 0;
}