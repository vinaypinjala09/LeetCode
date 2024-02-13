class Solution {
private:
    bool isPalindrome(string &word,int &i){
        for(i=0;i<word.size()/2;i++){
            if(word[i]!=word[word.size()-1-i]){
                return false;
            }
        }
        return true;
    }
public:
    string firstPalindrome(vector<string>& words) {
        int i = 0;
        for(string &word:words){
            if(isPalindrome(word,i)) return word;
        }
        return "";
    }
};