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
    int dfs(TreeNode* root){
        if(root==nullptr){
            return 0;
        }

        int lh = dfs(root->left);
        int rh = dfs(root->right);

        int diff = abs(lh-rh);
        if( diff >1 ) balanced = false;

        return (1+max(lh,rh)); // Return height
    }

    bool isBalanced(TreeNode* root) {
        dfs(root);
        return balanced;
    }
};
