/*************************************************************************
	> File Name: 9.c
	> Author: 
	> Mail: 
	> Created Time: Thu 03 Aug 2023 05:24:53 PM CST
 ************************************************************************/

#include<stdio.h>

int is_little(){
    int a = 1;
    return *(char *)&a;
}

int main(){
    if(is_little()){
        printf("小端\n");
    }else{
        printf("大端\n");
    }
    return 0;
}
