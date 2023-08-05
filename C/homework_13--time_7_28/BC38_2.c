#include <stdio.h>
#include<math.h>
#define N1 10000
#define N2 100000

int lily_number(int n) {
    //%x /x
    int sum = 0;
    for (int i = 1; i <= 4; i++) {
        //()ǿ������ת��
        sum += (n / (int)pow(10, i)) * (n % (int)pow(10, i));
    }
    return sum == n;
}

int main() {
    for (int i = N1; i < N2; i++) {
        if (!lily_number(i))continue;
        printf("%d ", i);
    }
    return 0;
}