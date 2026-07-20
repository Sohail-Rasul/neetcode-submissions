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
    TreeNode* solve(TreeNode* root,TreeNode* p, TreeNode* q){
        if(root == nullptr) return nullptr;

        if(root == p){
            return p;
        }
        if(root==q) return q;

        TreeNode* left = solve(root->left, p,q);
        TreeNode* right = solve(root->right,p,q);

        if(left && right){
            return root;
        }
        else if(left){
            return left;
        }
        else if(right){
            return right;
        }
        else return nullptr;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* res = solve(root,p,q);
        return res;
    }
};
