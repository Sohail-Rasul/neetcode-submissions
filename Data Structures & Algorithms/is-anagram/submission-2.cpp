class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> s_count;
        unordered_map<char,int> t_count;
        for(auto c : s){
            s_count[c]++;
        }
        for(auto c : t){
            t_count[c]++;
        }

        if(s_count == t_count){
            return true;
        }

        return false;
    }
};
