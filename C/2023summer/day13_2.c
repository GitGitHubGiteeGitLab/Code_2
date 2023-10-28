#include <stdio.h>
#include <math.h>
int main() {
    int m, n;
    while (scanf("%d%d", &m, &n) == 2) {
        double sum = m, x = m;
        while (n != 1) {
            x = sqrt(x);
            sum += x;
            n--;
        }
        printf("%.2f\n", sum);
    }
    return 0;
}