#include <stdio.h>
#define N1 10000
#define N2 100000

int lily_number(int n){
    //%x /x
    int num1 = (n / 10) * (n % 10);
    int num2 = (n / 10000) * (n % 10000);
    int num3 = (n / 100) * (n % 100);
    int num4 = (n / 1000) * (n % 1000);
    return num1 + num2 + num3 + num4 == n; 
}

int main(){
    for(int i = N1; i < N2; i++){
        if(!lily_number(i))continue;
        printf("%d ", i);
    }
    return 0;
}