class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        unordered_map<int,int>umap;
        int count = 0;
        
        for(int i:nums){
            umap[i]++;
        }
        
        for(auto it:umap){
          
            if(it.second==1) return -1;
            
            int val = it.second;
            
            if(val%3==0) count+=val/3;
            else if(val%3 == 2) count += val/3+1;
            
            else{
                
                count++;
                val -= 2;
                count += val/3+1;
            }
        }
        
        return count;
    }
};