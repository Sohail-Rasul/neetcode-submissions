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
    int diam=0;
    int diamCalc(TreeNode* root){
        if(root==nullptr) return 0;

        int left = diamCalc(root->left);
        int right = diamCalc(root->right);

        diam = max(diam, right+left);

        return (1+max(left,right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        diamCalc(root);
        return diam;
    }
};
