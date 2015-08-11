/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if( root == NULL) return 0;
        else{
             int i = 1 + maxDepth(root->left);//>maxDepth(root->right)?maxDepth(root->left):maxDepth(root->right);
             int j = 1 + maxDepth(root->right);//>maxDepth(root->right)?maxDepth(root->left):maxDepth(root->right);
             return i > j ? i : j;
        }
        
    }
    
};