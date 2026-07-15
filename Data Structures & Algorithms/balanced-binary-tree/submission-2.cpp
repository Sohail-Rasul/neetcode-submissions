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
    bool balanced = true;
    int height(TreeNode* root){
        if(!root) return 0;

        int left = height(root->left);
        int right = height(root->right);
        
        int diff = abs(right-left);
        if(diff>1) balanced = false; // check if left height and right height difference >1

        return (1+max(left,right)); // return height
    }
    bool isBalanced(TreeNode* root) {
        height(root);
        return balanced;
    }
};
