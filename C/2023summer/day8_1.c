#include <stdio.h>

int cmp(char* a, char* b) {
    return *a - *b;
}

int main() {
    char str[500] = { 0 };
    scanf("%s", str);
    qsort(str, strlen(str), sizeof(char), cmp);
    int prev = 0, cnt = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (prev != str[i])cnt++;
        prev = str[i];
    }
    printf("%d\n", cnt);
    return 0;
}