#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define N 100

#define check(lower, higher, digit) (lower>0)+(higher>0)+(digit>0) 

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char str[101] = { 0 };
        getchar();
        scanf("%[^\n]", str);
        int lower = 0, higher = 0, digit = 0, other = 0;
        if (strlen(str) < 8 || isdigit(*str)) {
            printf("NO\n");
            continue;
        }
        for (int j = 0; str[j]; j++) {
            if (isdigit(str[j]))digit++;
            else if (isupper(str[j]))higher++;
            else if (islower(str[j]))lower++;
            else other++;
        }
        if (other != 0) {
            printf("NO\n");
            continue;
        }
        else if (check(lower, higher, digit)) {
            printf("YES\n");
            continue;
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}