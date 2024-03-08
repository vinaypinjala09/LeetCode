class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) { 
        
        unordered_map<int,int>umap;
        int maxFreqSoFar = 0;
        int count = 0;
        
        for(int num:nums){
            umap[num]++;
            maxFreqSoFar = max(maxFreqSoFar,umap[num]);
        }
        
        for(auto it:umap){
            if(it.second == maxFreqSoFar){
                count++;
            }
        }
        
        return count*maxFreqSoFar;
        
    }
};