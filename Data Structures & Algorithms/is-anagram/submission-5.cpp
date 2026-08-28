class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> string_s;
        unordered_map<char,int> string_t;
        for (auto c : s){
            string_s[c]++;
        }
        for (auto c : t){
            string_t[c]++;
        }

        if(string_s == string_t){
            return true;
        }
        return false;
    }
};
