class TrieNode{
public:    
    unordered_map<char,TrieNode*> children;
    bool endOfWord = false;
};

class WordDictionary {
    
public:
    TrieNode* root;
    WordDictionary() {
        root = new TrieNode();
    }
    
    void addWord(string word) {
        TrieNode* curr = root;
        for( char c : word){
            if(curr->children.find(c) == curr->children.end()){
                curr->children[c] = new TrieNode();
            }

            curr = curr->children[c];
        }

        curr->endOfWord = true;
    }
    
    bool search(string word){
        return dfs(word,0,root);

    }
        
    bool dfs(string word, int j, TrieNode* root){
        TrieNode* cur = root;

        for(int i = j; i<word.size();i++){
            char c = word[i];
            if(c == '.'){
                for(auto& [ch, child] : cur->children){
                    if(child!=nullptr && dfs(word,i+1,child)){
                        return true;
                    }
                }

                return false;
            }
            else{
                if(cur->children[c] == nullptr){
                    return false;
                }
                cur = cur->children[c];
            }
        }

        return cur->endOfWord;
    }
};
