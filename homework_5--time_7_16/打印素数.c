#include<stdio.h>
#include<math.h>

int is_prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
       if(!(n % i))return 0;
    }
    return 1;
}


int main(){
    int flag = 0;
    for(int i = 100; i <= 200; i++){
        if(!is_prime(i))continue;
        if(flag == 1)printf(" ");
        printf("%d", i);
        flag = 1;
    }
    printf("\n");
    return 0;
}