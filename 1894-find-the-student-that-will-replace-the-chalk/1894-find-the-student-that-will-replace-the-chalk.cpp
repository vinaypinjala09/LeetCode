class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        
        int i = 0;
        int size = chalk.size();
        int p = k;
        long long sum = 0;
        
        for(int i:chalk){
            sum += i;    
        }
        
        int t = p / sum; 
        p -= (t*sum);
        
        while(true){
            
            if(p < chalk[i]) return i;
            p -= chalk[i];          
            i = (i+1) % size; 
                
        }
        
        return 0;
    }
};