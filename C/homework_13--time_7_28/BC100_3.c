#include <stdio.h>
#define N 1000
int main() {
    int m = 0, n = 0;
    int arr1[N], arr2[N];
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr1 + i);
    }
    for (int j = 0; j < m; j++) {
        scanf("%d", arr2 + j);
    }
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) printf("%d ", arr1[i++]);
        else printf("%d ", arr2[j++]);
    }
    if (i < n) {
        for (; i < n; i++) {
            printf("%d ", arr1[i]);
        }
    }
    else {
        for (; j < m; j++) {
            printf("%d ", arr2[j]);
        }
    }

    printf("\n");
    return 0;
}