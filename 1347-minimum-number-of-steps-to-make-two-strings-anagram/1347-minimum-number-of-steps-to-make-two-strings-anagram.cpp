class Solution {
public:
    int minSteps(string s, string t) {
        int count = 0;
        vector<int>vec(26,0);
        
        for(int i=0;i<s.length();i++){
            vec[s[i]-'a']++;
            vec[t[i]-'a']--;
        }
        
       for(int i:vec){
           if(i>0){
               count+=i;
           }
       }
        
        return count;
    }
};