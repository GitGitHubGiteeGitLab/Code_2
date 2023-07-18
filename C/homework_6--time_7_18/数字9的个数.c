#include <stdio.h>
int main() {
    int cnt = 0;
    for (int i = 9; i < 100; i++) {
        if (i % 10 == 9)cnt++;
        if (i / 10 == 9)cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}