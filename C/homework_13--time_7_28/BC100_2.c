#include <stdio.h>
#define N 1000
int main() {
    int m = 0, n = 0;
    int arr1[N], arr2[N], arr3[2 * N];
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr1 + i);
    }
    for (int j = 0; j < m; j++) {
        scanf("%d", arr2 + j);
    }
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) arr3[k++] = arr1[i++];
        else arr3[k++] = arr2[j++];
    }
    if (i < n) {
        for (; i < n; i++, k++) {
            arr3[k] = arr1[i];
        }
    }
    else {
        for (; j < m; j++, k++) {
            arr3[k] = arr2[j];
        }
    }
    for (int i = 0; i < m + n; i++) {
        i&& putchar(' ');
        printf("%d", arr3[i]);
    }
    printf("\n");
    return 0;
}