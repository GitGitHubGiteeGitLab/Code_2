#include <stdio.h>

int main() {
    char ch ;
    while (scanf("%c", &ch) != EOF) {
        if ('a' <= ch && ch <= 'z') {
            printf("%c\n", ch += 'A' - 'a');
        } else {
            printf("%c\n", ch += 'a' - 'A');
        }
        getchar();//'\n'也是字符，要读出来
    }
    return 0;
}