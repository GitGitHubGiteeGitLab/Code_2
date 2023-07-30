/*************************************************************************
	> File Name: 12.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Jul 2023 10:53:03 AM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define N 100000

int Armstrong(int n){
    int x = n, count = 0, ret = 0;
    do{
        count++;
        x /= 10;
    }while(x);
    int m = count;
    x = n;
    while(count--){
        ret += pow(x % 10, m);
        x /= 10;
    }
    return ret == n;
}

int main(){
    for(int i = 0; i <= N; i++){
        if(!Armstrong(i))continue;
        printf("%d ", i);
    }
    return 0;
}
