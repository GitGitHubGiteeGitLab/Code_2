#include <stdio.h>

int main() {
    int x;
    while (scanf("%d", &x) != EOF) //����scanf�����ļ�ĩβ���ȡʧ��ʱ����ֵΪEOF{
        if (x % 2 == 0) {
            printf("Even\n");
        } else {
            printf("Odd\n");
        }
    }
    return 0;
}