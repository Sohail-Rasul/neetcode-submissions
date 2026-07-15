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
    void invert(TreeNode* root){
        // Base Case
        if(root->left == nullptr && root->right != nullptr){
            root->left = root->right;
            root->right = nullptr;
            invert(root->left);
        }
        else if(root->left != nullptr && root->right == nullptr){
            root->right = root->left;
            root->left = nullptr;
            invert(root->right);
        }
        else if(root->left == nullptr && root->right == nullptr){
            return;
        }
        else{
            TreeNode* temp = root->left;
            root->left = root->right;
            root->right = temp;

            invert(root->left);
            invert(root->right);
        }

        

    }
    TreeNode* invertTree(TreeNode* root) {
        if(root != nullptr) invert(root);

        return root;
    }
};
