class Solution {
public:
    int numberOfBeams(vector<string>& bank) { 
        
        int ans = 0,prev=0,n=bank.size(),m=bank[0].size();
        
   
            for(int i = 0;i<n;i++){
                int curr = 0;
                for(int j = 0;j<m;j++){
                    
                    if(bank[i][j] == '1'){
                        curr++;
                    }
                    
                }
                if(curr){
                    ans += prev*curr;
                    prev = curr;
                }
            }
        
        return ans;
               
    }
};