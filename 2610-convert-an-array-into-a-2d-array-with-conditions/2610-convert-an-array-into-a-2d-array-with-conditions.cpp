class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>val(201,0);
        for(int i:nums){
            
           val[i]++;
            if(ans.size()<val[i]){
                ans.push_back({i});
            }else{
                ans[val[i]-1].push_back(i);
            }
        }
        
        return ans;
    }
};