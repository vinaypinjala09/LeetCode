class Solution {
public:
    char findKthBit(int n, int k) { 
        
        vector<string>vec(n,"");
        vec[0]="0";
        for(int i=1;i<n;i++){
            string s = invert(vec[i-1]);
            reverse(s.begin(),s.end());
            vec[i] = vec[i-1]+"1"+s;
        }
        
        return vec[n-1][k-1];
        
    }
    string invert(string s){
        string str = "";
        for(char i:s){
            str+= (!(i-'0'))+'0';
        }
        return str;
    }
   
};