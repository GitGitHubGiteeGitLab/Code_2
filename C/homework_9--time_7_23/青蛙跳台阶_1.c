int numWays(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return (numWays(n - 1) + numWays(n - 2)) % 1000000007;
}