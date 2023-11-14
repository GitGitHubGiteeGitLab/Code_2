#include <stdio.h>
//利用异或性质，偶数次异或为0， 奇数次异或为本身
int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        ans ^= temp;
    }
    printf("%d\n", ans);
    return 0;
}