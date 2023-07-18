#include<stdio.h>

int main(){
    for(int i = 3; i <= 100; i += 3){
        i != 3 && printf(" ");
        printf("%d", i);
    }
    return 0;
}