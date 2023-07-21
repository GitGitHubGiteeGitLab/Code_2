/*************************************************************************
	> File Name: 乘法口诀表.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Jul 2023 06:44:59 PM CST
 ************************************************************************/

#include<stdio.h>

void output(int n){
	//控制行数
	for(int i = 1; i <= n; i++)
	{
		//打印每一行内容，每行有i个表达式
		int j = 0;
		for(j=1; j<=i; j++)
		{
			printf("%d*%d=%2d ", j, i, i*j);
		}
		printf("\n");
    }
}

int main(){
    int n;
    while(~scanf("%d", &n))output(n);
    return 0;
}
