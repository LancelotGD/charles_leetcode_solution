class Solution {
public:
    int path=0;
    int longestUnivaluePath(TreeNode* root) {
        dfs(root);
        return path;
    }
    int dfs(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int left=dfs(root->left),right=dfs(root->right);
        int leftPath=root->left!=nullptr&&root->left->val==root->val?left+1:0;
        int rightPath=root->right!=nullptr&&root->right->val==root->val?right+1:0;
        path=max(path,leftPath+rightPath);
        return max(leftPath,rightPath);
    }
};
