class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr&&q==nullptr) return true;
        if(p==nullptr||q==nullptr) return false;
        if(q->val==p->val) return isSameTree(q->left,p->left)&&isSameTree(q->right,p->right);
        return false;
    }
};
