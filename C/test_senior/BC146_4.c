#include<stdio.h>
#define N 15
int main(){
    int n;
    scanf("%d", &n);
    char arr[N] = {0};
    int i = 0;
    int k = 0;
    while(n){
        if(k % 3 == 0 && k != 0 ){
            arr[i++] = ',';
        }
        arr[i++] = n % 10 + '0';
        n /= 10;
        k++;
    }
    for(i--; i >= 0; i--){
        putchar(arr[i]);
    }
    return 0;
}
