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
    int minDepth(TreeNode* root) {
         if( root == NULL) return 0;
         int i = minDepth(root->left);
         int j = minDepth(root->right);
         if(i == 0)             //没有这两个if语句会出错
           return j + 1;
         if(j == 0)
           return i + 1;
         return i > j ? j + 1 : i + 1;
        
    }
};