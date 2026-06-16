class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> dict;
        unordered_set<char> use_check;

        int len_s = s.size();
        int len_t = t.size();

        if(len_s != len_t){
            return false;
        }

        for(int i =0;i<len_s;i++){
            if(dict.find(s[i]) != dict.end()){ // It exists in the dictionary
                if(t[i] != dict[s[i]]){
                    return false;
                }
            }
            else{
                if(use_check.find(t[i]) != use_check.end() ){ //  It exists in the set
                    return false;
                }

                dict[s[i]] = t[i];
                use_check.insert(t[i]);
            }
        }

        return true;

    }
};