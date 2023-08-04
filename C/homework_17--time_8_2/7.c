/*************************************************************************
	> File Name: 7.c
	> Author: 
	> Mail: 
	> Created Time: Thu 03 Aug 2023 10:55:52 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int kill[4] = {0};
    for(int i = 0; i < 4; i++){
        kill[i] = 1;
        if((kill[0] != 1) + (kill[2] == 1) + (kill[3] == 1) + (kill[3] != 1) == 3){
            printf("killer : %c\n", 'A' + i);
            break;
        }
        kill[i] = 0;
    }
    return 0;
}
