#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 
void compare(int a, int b) {
	printf("%d��%d�нϴ�ֵ��%d", a, b, (a > b) ? a : b);
}

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	compare(x, y);
	return 0;
}