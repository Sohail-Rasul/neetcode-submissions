class TrieNode{
public:
    unordered_map<char,TrieNode*> children;
    int childCt = 0;
};

class Solution {
    TrieNode* root;
public:
    string longestCommonPrefix(vector<string>& strs) {
        root = new TrieNode();

        for(string s : strs){
            TrieNode* cur = root;
            for(char c : s){
                if(cur->children.find(c) == cur->children.end()){
                    cur->children[c] = new TrieNode();
                    cur->childCt++;
                }
                
                cur = cur->children[c];
            }
        }

        string word = strs[0];

        for(string& s : strs) {
            if(s.size() < word.size()) {
                word = s;
            }
        }

        TrieNode* curr = root;
        string res;
        
        for(char c : word){
            if(curr->childCt>1) return res;
            else{
                res.push_back(c);
            }

            curr = curr->children[c];
        }

        return res;
    }
};