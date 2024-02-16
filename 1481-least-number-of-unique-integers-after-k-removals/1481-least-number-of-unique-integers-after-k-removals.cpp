class Solution {

public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        
        unordered_map<int,int>umap;
        
        for(int &num:arr){
            umap[num]++;
        }
        
        vector<int>vec;
        
        for(auto &it:umap){
            vec.push_back(it.second);
        }
        
        sort(vec.begin(),vec.end());
            int i;
            for( i=0;i<vec.size();i++){
               if(vec[i]>k){
                   break;
               } 
                else{
                    k=k-vec[i];
                }
            
            }  
       
       return vec.size()-i; 
        
    }
};