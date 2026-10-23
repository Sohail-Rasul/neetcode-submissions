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
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> bst;
        vector<int> res;
        queue<TreeNode*> q;

        if(!root) return res;
        q.push(root);

        while(!q.empty()){

            vector<int> arr;
            int qSize = q.size();

            for(int i =0;i<qSize;i++){
                TreeNode* front = q.front();
                q.pop();
                
                arr.push_back(front->val);

                if(front->right != nullptr){
                    q.push(front->right);
                }
                if(front->left != nullptr){
                    q.push(front->left);
                }
            }

            bst.push_back(arr);
        }

        for(vector<int> arr : bst){
            res.push_back(arr[0]);
        }

        return res;
    }
};
