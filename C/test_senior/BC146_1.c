
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define N 20

//最大数据是20亿
int main() {
    char str1[N] = {0};
    char str2[N] = {0};
    while (scanf("%s", str1) == 1) {
        int n = atoi(str1);
        int i = 3;
        int cnt1 = 0, m = 0;
        do {
            int t = (int)pow(10, i);
            m = n / t;
            if (m != 0) {
                cnt1++;
                i += 3;
            }
        } while (m != 0);
        int len = strlen(str1) + cnt1;
        int cnt2 = 0;
        for (int i = len - 1, j = strlen(str1) - 1; i >= 0; i--) {
            if (cnt2 == 3) {
                str2[i] =  ',';
                cnt2 = 0;
                continue;
            }
            str2[i] = str1[j];
            j--;
            cnt2++;
        }
        printf(str2);
        printf("\n");
        getchar();
        memset(str1, 0, sizeof(str1));
        memset(str2, 0, sizeof(str2));
    }
    return 0;
}
