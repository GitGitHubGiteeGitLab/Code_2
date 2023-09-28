#include <stdio.h>
//多写机组发现规律，是fibonacci
/*int nums(int n){
    if(n == 1 || n == 2)return 1;
    return nums(n-1) + nums(n-2);
}*/

int nums(int n) {
    int num[n + 1];
    num[1] = num[2] = 1;
    for (int i = 3; i < n + 1; i++) {
        num[i] = num[i - 1] + num[i - 2];
    }
    return num[n];
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", nums(n));
    return 0;
}