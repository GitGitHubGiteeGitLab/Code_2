/*************************************************************************
	> File Name: solve_question.c
	> Author: 
	> Mail: 
	> Created Time: Tue 25 Jul 2023 04:37:01 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{

        char arr[3][3] = { {1,2,3},{4,5,6}, {7,8,9} };
        char** pp = NULL;
        pp = (char**)malloc(sizeof(char*) * 3);
        for (int i = 0; i < 3; i++) {
            pp[i] = arr[i];//为指针数组中的指针赋值
        }

        printf("%d%d%d\n", pp[0][0], pp[0][1], pp[0][2]);
        printf("%d%d%d\n", pp[1][0], pp[1][1], pp[1][2]);
        printf("%d%d%d\n",pp[2][0], pp[2][1],pp[2][2]);
        free(pp);
        return 0;

}
