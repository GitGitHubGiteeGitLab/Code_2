#include <stdio.h>

int main() {
    int n, m, count1 = 0, count2 = 0, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &m);
        if (m > 0) {
            sum += m;
            count1++;
        }
        else if (m < 0) {
            count2++;
        }
    }
    //double
    double average = (count1 == 0) ? (sum) : (1.0 * sum / count1);
    printf("%d %.1f", count2, average);
    return 0;
}