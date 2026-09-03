class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int curr = 0;
        int l =0;
        unordered_set<char> charSet;

        for(int i = 0;i<s.size();i++){
            while(charSet.count(s[i])){
                charSet.erase(s[l]);
                l++;
                curr--;
            }

            charSet.insert(s[i]);
            curr++;
            res = max(res,curr);
        }

        return res;
    }
};
