#include<stdio.h>
#include<math.h>

int main(){
    double sum1 = 0, sum2 = 0;
    for(int i = 1; i < 100; i += 2){
        sum1 += 1.0 / i;
    }
    for(int i = 2; i <= 100; i += 2){
        sum2 += 1.0 / i;
    }
    printf("%lf\n", sum1 - sum2);
    return 0;
}