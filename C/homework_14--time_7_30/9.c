/*************************************************************************
	> File Name: 9.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Jul 2023 10:38:47 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr = calloc(10, sizeof(int));
    for(int i = 0; i < 10; i++){
        scanf("%d", arr + i);
    }
    int *parr = arr;
    for(int i = 0; i < 10; i++){
        printf("%d ", *parr++);
    }
    return 0;
}
