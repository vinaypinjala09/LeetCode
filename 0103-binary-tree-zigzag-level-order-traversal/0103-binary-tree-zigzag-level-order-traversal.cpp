/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
     
         if(!root) return {};
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root); 
       
        TreeNode *temp;
        bool val = false;
        int n;
        while(!q.empty()){
            
           vector<int>vec;
            n = q.size();
            
            for(int i=0;i<n;i++){
                
                temp = q.front();
                q.pop();
                
                vec.push_back(temp->val);
                
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            
            if(val){
                reverse(vec.begin(),vec.end());
            }
            val = !val; 
            ans.push_back(vec);
        }
        
        return ans;
        
    }
};