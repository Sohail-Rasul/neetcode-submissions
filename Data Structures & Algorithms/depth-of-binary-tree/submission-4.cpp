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
    int maxHeight = 0;

    void dfs(TreeNode* root,int height){
        if(!root) return;

        height++;
        maxHeight = max(maxHeight,height); 
        dfs(root->left,height);
        dfs(root->right,height);

        return;
    }

    int maxDepth(TreeNode* root) {
        dfs(root,0);

        return maxHeight;
    }
};
