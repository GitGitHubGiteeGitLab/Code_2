#include <stdio.h>

int main () {
    char ch;
    while (scanf("%c", &ch) == 1) {//%c只能读入一个字符而不是多位数，66只能读入6
        if (('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z')) {
            printf("%c is an alphabet.\n", ch);
        } else {
            printf("%c is not an alphabet.\n", ch);
        }
        getchar();
    }
    return 0;
}