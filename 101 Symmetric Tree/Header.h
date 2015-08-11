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
    bool isSymmetric(TreeNode* root) {
       // if(root == NULL) return true;
        return !root ? true : fun(root->left, root->right);
        /*if(root->left == NULL && root->right != NULL) return false;
        if(root->left != NULL && root->right == NULL) return false;
        if(root->left != NULL && root->right != NULL)
        {
            if(root->left->val == root->right->val)
            {
                isSymmetric(root->left);
                isSymmetric(root->right);
            }
            else
                return false;
        }
        return true;*/
    }
   bool fun(TreeNode* left, TreeNode* right)
    {
        if(!left && !right) return true;
        return (left&&right) && (left->val == right->val) && (fun(left->left, right->right)) && (fun(left->right, right->left));
    }
    
};
