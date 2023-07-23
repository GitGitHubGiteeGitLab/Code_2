//想上一步怎么到现在,对于0来说不跳也是一种跳法
//用递推（动态规划dp(Dynamic Programming)）不用递归
//MOD "Modulus"(取模)
#include<stdio.h>
#define MOD 1000000007 
int numWays(int n) {
    int dp[n + 1];//C99 support 
    dp[0] = 1L;
    if (n)dp[1] = 1L;//防n == 0
    for (int i = 2; i < n + 1; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;//1e9 + 7这样表示是浮点数，要强转，只有这样取模才能通过编译
    }
    return dp[n];
}