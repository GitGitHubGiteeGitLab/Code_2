//����һ����ô������,����0��˵����Ҳ��һ������
//�õ��ƣ���̬�滮dp(Dynamic Programming)�����õݹ�
//MOD "Modulus"(ȡģ)
#include<stdio.h>
#define MOD 1000000007 
int numWays(int n) {
    int dp[n + 1];//C99 support 
    dp[0] = 1L;
    if (n)dp[1] = 1L;//��n == 0
    for (int i = 2; i < n + 1; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;//1e9 + 7������ʾ�Ǹ�������Ҫǿת��ֻ������ȡģ����ͨ������
    }
    return dp[n];
}