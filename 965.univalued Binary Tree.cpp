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
    int flag=0;
    bool isUnivalTree(TreeNode* root) {
        int num=root->val;
        return check(num,root);
    }
    bool check(int root_val,TreeNode *root){
        if(root==NULL)
            return true;
        if(root->val==root_val&&check(root_val,root->left)&&check(root_val,root->right))
            return true;
        return false;
    }
};