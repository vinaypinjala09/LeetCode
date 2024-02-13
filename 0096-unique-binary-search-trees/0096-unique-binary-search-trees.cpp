class Solution {
private:
    int solve(vector<int>&dp,int n){
        if(n<=1) return 1;
        if(dp[n]!=-1) return dp[n];
        int ans = 0;
         for(int j=1;j<=n;j++){
                ans += solve(dp,n-j)*solve(dp,j-1);
            }
        return dp[n] = ans;
    }
public:
    int numTrees(int n) {
        
        vector<int>dp(n+1,-1);
        return solve(dp,n);
        
    }
};