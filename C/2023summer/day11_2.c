#include <stdio.h>
int perfectNum(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)sum += i;
    }
    return sum == n;
}

int main() {
    int n, num = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (perfectNum(i) == 1)num++;
    }
    printf("%d\n", num);
    return 0;
}