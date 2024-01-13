class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        long long product = 1;
        int count = 0;
        
        for(int num:nums){
            if(num){
            product*=num;
            }
            else{
                count++;
            }
        }
        vector<int>ans;
        if(count>1) {
            vector<int>ans2(nums.size(),0);
            return ans2;}
        
        for(int num:nums){ 
            if(!count){ 
                ans.push_back(int(product/num));
            }else{
                if(!num){
                    ans.push_back(product);
                }
                else{
                    ans.push_back(0);
                }
            }
        }
        
        return ans;
    }
};