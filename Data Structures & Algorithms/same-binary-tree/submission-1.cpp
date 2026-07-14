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
    void traverse(TreeNode* root,vector<int>& arr){
        if(root == nullptr){
            arr.push_back('#');
            return;
        }

        traverse(root->left,arr);
        traverse(root->right,arr);
        arr.push_back(root->val);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> arrP;
        vector<int> arrQ;

        traverse(p,arrP);
        traverse(q,arrQ);

        for(int n : arrP){
            cout << n <<"\t";
        }

        cout << "\n";

        for(int n : arrQ){
            cout << n << "\t";
        }

        if(arrP == arrQ) return true;
        else return false;
    }
};
