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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> q;
        if(root) q.push(root);
        else return res;

        while(!q.empty()){
            int qSize = q.size();
            vector<int> arr;
            for(int i =0;i<qSize;i++){
                TreeNode* top = q.front();
                arr.push_back(top->val);
                q.pop();

                if(top->left != nullptr){
                    q.push(top->left);
                }

                if(top->right != nullptr){
                    q.push(top->right);
                }
            }

            res.push_back(arr);
        }

        return res;
    }

    
};
