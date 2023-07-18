#include <stdio.h>

int main() {
    int x;
    while (scanf("%d", &x) != EOF) //利用scanf读到文件末尾或读取失败时返回值为EOF{
        if (x % 2 == 0) {
            printf("Even\n");
        } else {
            printf("Odd\n");
        }
    }
    return 0;
}