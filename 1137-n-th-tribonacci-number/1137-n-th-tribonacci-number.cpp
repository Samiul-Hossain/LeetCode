class Solution {
public:
    vector<int> dp;
    int fib(int n){
        if(dp[n] != -1)
            return dp[n];
        if(n==0)
            return dp[n] = 0;
        if(n == 1 || n == 2)
            return dp[n] = 1;
        else return dp[n] = fib(n-1) + fib(n-2) + fib(n-3);
    }
    int tribonacci(int n) {
        dp = vector<int>(38, -1);
        return fib(n);
    }
};