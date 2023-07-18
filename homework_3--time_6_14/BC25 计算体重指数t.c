#include <stdio.h>

int main() {
    int tall, mass;
    scanf("%d %d", &mass, &tall);
    printf("%.2lf", mass / ((tall * 1.0 / 100) * (tall * 1.0 /
                            100))); //格式控制符控制输出位数//类型转换
    return 0;
}