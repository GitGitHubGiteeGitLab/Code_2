/*************************************************************************
	> File Name: 11.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Jul 2023 01:25:54 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    for(int i = 0; i < 13; i++){
        if(i <= 6){
           for(int j = 0; j < 6 - i; j++)putchar(' ');
           for(int k = 0; k < 2 * i + 1; k++)putchar('*');
        }else{
           for(int j = 0; j < i - 6; j++)putchar(' ');
           for(int k = 0; k < 25 - 2 * i; k++)putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
