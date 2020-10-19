class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
            return NULL;
        if(root==p)
            return root;
        if(root==q)
            return root;
        
        TreeNode* left=lowestCommonAncestor(root->left,p,q);
        TreeNode* right=lowestCommonAncestor(root->right,p,q);
        
        if(left!=NULL && right!=NULL)
            return root;
        if(left!=NULL)
            return left;
        if(right!=NULL)
            return right;
        return NULL;
    }
};