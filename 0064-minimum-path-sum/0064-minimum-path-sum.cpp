class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),-1));
        int n = grid.size(), m = grid[0].size();
        dp[n-1][m-1] = grid[n-1][m-1];
        
        for(int i = m-2; i >= 0; i-- ){
            dp[n-1][i] = grid[n-1][i] +dp[n-1][i+1];
        }

        for(int i = n-2; i >= 0; i-- ){
            dp[i][m-1] = grid[i][m-1] +dp[i+1][m-1];
        }

        for(int i = n-2; i >= 0; i--){
            for(int j = m-2; j>=0;j--){
                dp[i][j] = grid[i][j] + min (dp[i+1][j],dp[i][j+1]);
            }
        }
        
        // for(auto i:dp){
        //     for(int j:i){
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }

        return dp[0][0];    
    }
};