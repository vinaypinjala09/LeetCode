class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int>umap;
        unordered_map<int,int>umap2;
        for(int i:arr){
            umap[i]++;
        }
        
        for(auto [x,y]:umap){
            umap2[y]++;
            if(umap2[y]>1){
                return false;
            }
        }
        
        return true;
    }
};