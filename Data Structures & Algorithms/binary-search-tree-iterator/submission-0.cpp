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
class BSTIterator {
public:
    vector<TreeNode*> arr;
    int curr = 0;
    void bst(TreeNode* root){
        if(root==nullptr) return;

        bst(root->left);
        arr.push_back(root);
        cout <<"Pushing: "<< root->val <<"\n";
        bst(root->right);
    }

    BSTIterator(TreeNode* root) {
        bst(root);

    }
    
    int next() {
        if(curr < arr.size()){
            int val = arr[curr]->val;
            curr++;
            return val;
        }

        return -1;
    }
    
    bool hasNext() {
        if(curr+1 <= arr.size()) return true;
        else return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */