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
    int diameterOfBinaryTree(TreeNode* root) {
        
        int maxVal = 0;
        int maxLength = 0;
        height(root,maxLength);
        return maxLength-1;
    }
    
    int height(TreeNode*root,int &maxLength){
        
        if(root==NULL) return 0;
        
        int left = height(root->left,maxLength);
        int right = height(root->right,maxLength);
        
         
        maxLength = max(left + right +1,maxLength);
            
        return max(left,right)+1;
        
    }
};