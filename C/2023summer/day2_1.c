#include <stdio.h>

int main() {
    int m;
    while (scanf("%d", &m) != EOF) { // ע�� while ������ case
        // 64 λ������� printf("%lld") to 
        for (int i = 0, n = m * (m - 1) + 1; i < m; i++, n += 2) {
            i&& printf("+");
            printf("%d", n);
        }
        printf("\n");
    }
    return 0;
}