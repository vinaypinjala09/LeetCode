class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        unordered_map<int,int>umap;
        vector<vector<int>>ans;
        
        for(auto &v:matches){
            
            if(umap.find(v[0])==umap.end()){
                umap[v[0]]=0;
            }
            
                umap[v[1]]--;
 
            
        }
        
        vector<int>temp1;vector<int>temp2;
        for(auto &[x,y]:umap){
           // cout<<x<<" "<<y<<" ";
            if(y==0){
                temp1.push_back(x);
            }else if(y==-1){
                temp2.push_back(x);
            }
        }
        sort(temp1.begin(),temp1.end());
        sort(temp2.begin(),temp2.end());
        ans.push_back(temp1);
        ans.push_back(temp2);
        return ans;
    }
};