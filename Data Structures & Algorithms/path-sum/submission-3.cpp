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
    bool res = false;
    void dfs(TreeNode* root,int sum,int target){
        if(root==nullptr) return;

        sum+=root->val;

        if(root->left==nullptr && root->right == nullptr && sum == target){
            res = true;
            return;
        }

        

        dfs(root->left,sum,target);
        dfs(root->right,sum,target);

        return;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        dfs(root,0,targetSum);

        return res;
    }
};