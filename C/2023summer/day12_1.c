#include <stdio.h>
#include <string.h>
int main() {
    char str[100] = { 0 };
    scanf("%s", str);
    for (int i = strlen(str) - 1; ~i; i--) {
        putc(str[i], stdout);
    }
    printf("\n");
    return 0;
}