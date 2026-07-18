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
    // pass greatest int along with root
    int ctr=0;
    void good(TreeNode* root, int greatest){
        if(root==nullptr){
            return;
        }

        if(root->val >= greatest){
            ctr++;
            greatest = root->val;
        }

        good(root->left,greatest);
        good(root->right,greatest);

    }
    int goodNodes(TreeNode* root) {
        good(root,INT_MIN);
        return ctr;
    }
};
