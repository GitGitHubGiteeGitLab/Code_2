/*************************************************************************
	> File Name: 11.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Jul 2023 01:25:54 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int line;
    while(~scanf("%d", &line)){
        for(int i = 0; i < 2 * line - 1; i++){
            if(i < line){
                for(int j = 0; j < line - i - 1; j++)putchar(' ');
                for(int k = 0; k < 2 * i + 1; k++)putchar('*');
            }else{
                for(int j = 0; j < i + 1 - line; j++)putchar(' ');
                for(int k = 0; k < 4 * line - 2 * i - 3; k++)putchar('*');
            }
            putchar('\n');
        }
    }
    return 0;
}
