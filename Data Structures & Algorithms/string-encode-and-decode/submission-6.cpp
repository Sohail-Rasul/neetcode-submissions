class Solution {
public:

    string encode(vector<string>& strs) {
        string enc;
        for(string s : strs){
            enc+=s;
            enc+=" _ ";
        }
        return enc;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        vector<int> ct;

        for(int i =0;i<s.size();i++){
            if(s[i] == ' ' && s[i+1] == '_' && s[i+2]==' '){
                ct.push_back(i);
            }
        }
        int first = 0;
        for(int n : ct){
            int len = n-first;
            ans.push_back(s.substr(first,len));
            first =n+3;
        }
        return ans;
    }
};
