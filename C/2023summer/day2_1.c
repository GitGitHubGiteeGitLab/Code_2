#include <stdio.h>

int main() {
    int m;
    while (scanf("%d", &m) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
        for (int i = 0, n = m * (m - 1) + 1; i < m; i++, n += 2) {
            i&& printf("+");
            printf("%d", n);
        }
        printf("\n");
    }
    return 0;
}