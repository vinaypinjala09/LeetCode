class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> umap;
        vector<int> ans;
        for(int &i: nums){
            umap[i]++;
        }
        
        vector<vector<int>> freqArr;
        
        for(auto &i: umap){
            freqArr.push_back({i.first,i.second});
        }
        
        sort(freqArr.begin(), freqArr.end(), comp);
        
        for(int i=0;i<k;i++){
            ans.push_back(freqArr[i][0]);
        }
        
        return ans;
        
    }
    
    static bool comp(vector<int>a, vector<int>b){
        return a[1] > b[1];
    }
};