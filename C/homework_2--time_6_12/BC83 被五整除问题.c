#include <stdio.h>

int main() {
    int M;
    scanf("%d", &M);
    if (M % 5 == 0) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}