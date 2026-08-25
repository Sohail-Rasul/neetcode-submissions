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

    int maxD = 0;

    void dfs(TreeNode* root, int depth){
        if(root==nullptr){
            maxD = max(maxD, depth);
            return;
        }

        depth++;
        dfs(root->left,depth);
        dfs(root->right,depth);

        return;
        
    }

    int maxDepth(TreeNode* root) {
        dfs(root,0);

        return maxD;
    }
};
