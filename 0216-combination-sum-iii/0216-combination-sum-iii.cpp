class Solution {
void sol(vector<vector<int>>&ans,vector<int>&ds,int k,int val,int n){
    
    if(n==0 && ds.size()==k){
        ans.push_back(ds);
    }
    
    for(int i=val;i<=9;i++){
        ds.push_back(i);
        sol(ans,ds,k,i+1,n-i);
        ds.pop_back();
    }
    
}
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int>ds;
        sol(ans,ds,k,1,n);
        return ans;
    }
}; 

