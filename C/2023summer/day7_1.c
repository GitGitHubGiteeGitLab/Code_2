#include <stdio.h>
#include <stdlib.h>
//a,b����char*,�¹ؽ�����Ȩ��
int cmp(char* a, char* b) {
    return *a - *b;
}

int main() {
    char str[1000] = { 0 };
    scanf("%s", str);
    qsort(str, strlen(str), sizeof(char), cmp);
    puts(str);
}