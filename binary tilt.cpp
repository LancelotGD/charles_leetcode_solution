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
    int getSum(TreeNode* root){
        if(!root)
            return 0;
        return root->val+getSum(root->left)+getSum(root->right);
    }
    int findTilt(TreeNode* root) {
        if(!root)
            return 0;
        return abs(getSum(root->left)-getSum(root->right))+findTilt(root->left)+findTilt(root->right);
    }
};