class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size()==1) return strs[0];
        
       string commonStr="";

        for(int i=0;i<strs[0].size();i++){
                char ch = strs[0][i];
                for(int j=0;j<strs.size();j++){
                   if(strs[j][i]!=ch){
                       return commonStr;
                   } 
                }
                commonStr += ch;
            }
        return commonStr;
        }
      
    
};