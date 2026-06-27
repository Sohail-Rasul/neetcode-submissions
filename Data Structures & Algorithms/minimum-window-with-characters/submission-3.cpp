class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char,int> need;
        unordered_map<char,int> window;

        for(char c : t)
            need[c]++;

        int have = 0;
        int needCount = need.size();

        int l = 0;

        int bestLen = INT_MAX;
        int bestStart = 0;

        for(int r=0;r<s.size();r++){

            window[s[r]]++;

            if(need.count(s[r]) &&
               window[s[r]] == need[s[r]])
                have++;

            while(have == needCount){

                if(r-l+1 < bestLen){
                    bestLen = r-l+1;
                    bestStart = l;
                }

                window[s[l]]--;

                if(need.count(s[l]) &&
                   window[s[l]] < need[s[l]])
                    have--;

                l++;
            }
        }

        if(bestLen == INT_MAX)
            return "";

        return s.substr(bestStart,bestLen);
    }
};