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
    vector<int> arr;
    void dfs(TreeNode* root){
        if(root==nullptr) return;

        
        if(root->left!=nullptr) {
            dfs(root->left);
        }

        arr.push_back(root->val);

        if(root->right!=nullptr) {
            dfs(root->right);
        }
    }
    bool isValidBST(TreeNode* root) {
        dfs(root);

        for(int i =0;i<arr.size()-1;i++){
            if(arr[i] >= arr[i+1]) return false;
        }

        return true;
    }
};
