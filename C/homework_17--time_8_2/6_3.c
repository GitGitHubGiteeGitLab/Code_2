/*************************************************************************
	> File Name: 6_3.c
	> Author: 
	> Mail: 
	> Created Time: Fri 04 Aug 2023 11:25:25 AM CST
 ************************************************************************/

#include<stdio.h>

int checkData(int *p){
    int temp = 0;
    for(int i = 0; i < 5; i++){
        temp |= 1 << p[i];
    }
    return temp == 0x3e;
}

void diveRank(int * p, int n)
{
	if(n == 5) //此时的n是用来控制循环层数的。
	{
		if ((p[1] == 2) + (p[0] == 3) == 1 && //B第二，我第三
			(p[1] == 2) + (p[4] == 4) == 1 && //我第二，E第四
			(p[2] == 1) + (p[3] == 2) == 1 && //我第一，D第二
			(p[2] == 5) + (p[3] == 3) == 1 && //C最后，我第三
			(p[4] == 4) + (p[0] == 1) == 1 && //我第四，A第一
			checkData(p)) //查重
		{
			for (int i = 0; i < 5; i++)
			{
				printf("%d ", p[i]);
			}
			putchar('\n');
		}
		return;
    }
    for(p[n] = 1; p[n] <= 5; p[n]++){
        diveRank(p, n + 1);
    }
	

}

int main()
{
	int p[5];

	diveRank(p, 0);

	return 0;
}
