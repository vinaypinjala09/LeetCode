class Solution {
public:
    int numTrees(int n) {
        
        vector<int>dp(n+1,1);
        int total = 0;
        
        for(int i=2;i<n+1;i++){
            
            total = 0;
            for(int j=1;j<=i;j++){
                total += dp[i-j]*dp[j-1];
            }
            dp[i] = total;
        }
        
        return dp[n];
        
    }
};