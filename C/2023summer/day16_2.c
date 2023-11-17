#include <stdio.h>

int main() {
    int k;
    char str[1000];
    scanf("%s%d", str, &k);
    str[k] = '\0';
    puts(str);
    return 0;
}