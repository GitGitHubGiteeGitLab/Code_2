#include <stdio.h>
#include <stdlib.h>

int main() {
    //21 1Áô¸ø'\0'
    char str[500][21] = { 0 };
    int k = 0;
    while (1) {
        int x = scanf("%[a-z|A-Z]", str[k]);
        if (getchar() == '\n')break;
        if (x) k++;
    }
    for (int i = k; ~i; i--) {
        printf("%s ", str[i]);
    }
    return 0;
}