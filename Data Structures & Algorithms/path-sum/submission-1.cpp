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
    int exists = 0;
    void calc(TreeNode* root, int sum,int target){
        sum+=root->val;
        // Node is leaf
        if(root->left==nullptr && root->right == nullptr){
            if(sum==target){
                cout << sum << " = " << target <<"\n";
                exists = 1;
            }
            return;
        }
        // Right Null
        else if(root->right == nullptr){
            calc(root->left,sum,target);
        }

        //Left Null
        else if(root->left == nullptr){
            calc(root->right,sum,target);
        }

        //neither is null
        else{
            calc(root->left,sum,target);
            calc(root->right,sum,target);
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr) return false;
        calc(root,0,targetSum);
        return exists;
    }
};