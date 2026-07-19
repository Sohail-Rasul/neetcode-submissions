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
    int exists=0;
    void calc(TreeNode* root,int sum, int target){
        if(root==nullptr){
            return;
        }

        sum += root->val;

        if(root->left==nullptr && root->right == nullptr){
            if(sum==target){
                exists = 1;
            }
            return;
        }

        calc(root->left,sum,target);
        calc(root->right,sum,target);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        calc(root,0,targetSum);
        return exists;
    }
};