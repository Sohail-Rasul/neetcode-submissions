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

    TreeNode* check(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==nullptr) return nullptr;

        if(root==p) return p;
        if(root == q) return q;

        TreeNode* left = check(root->left,p,q);
        TreeNode* right = check(root->right,p,q);

        if(left && right) return root;

        if(left) return left;

        if(right) return right;

        return nullptr;

    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* res = check(root,p,q);

        return res;
    }
};