#include<stdio.h>

int main(){
    union{
        int i;
        char ch;
    }u;
    u.i = 1;
    if(u.ch == 1){
        printf("小端\n");
    }else{
        printf("大端\n");
    } 
    return 0;
}