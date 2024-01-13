class Solution {
public:
    int minSteps(string s, string t) {
        int count = 0;
        vector<int>vec(26,0);
        
        for(char ch : s){
            vec[ch-'a']++;
        }
        
        for(char ch:t){
            if(vec[ch-'a']<1){
                count++;
            }
            else{
                vec[ch-'a']--;
            }
        }
        
        return count;
    }
};