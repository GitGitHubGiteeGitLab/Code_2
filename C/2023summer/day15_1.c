#include <stdio.h>
//����������ʣ�ż�������Ϊ0�� ���������Ϊ����
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