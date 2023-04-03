vector<int>dp(46,-1);
class Solution {
public:
    int climbStairs(int n) {
        //memization
        if(n<=1) return 1;
        if(dp[n]!=-1)
        return dp[n];
        dp[n-1] = climbStairs(n-1);
        dp[n-2] = climbStairs(n-2);
        return dp[n-1] + dp[n-2];
    }
};
