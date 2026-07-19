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
    void solve(TreeNode* root, string& num){
        if(root == nullptr) return;

        num = num + to_string(root->val);
        if(root->left == nullptr && root->right == nullptr){
            arr.push_back(stoi(num));
        }

        solve(root->left,num);
        solve(root->right,num);

        num.pop_back();
    }
    int sumNumbers(TreeNode* root) {
        string num;
        solve(root,num);
        int res = 0;
        for(int n : arr){
            res+=n;
        }

        return res;
    }
};