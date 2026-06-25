class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l =0;
        int ctr=0;
        int longest =0;

        unordered_set<char> charSet;
        if(s.size()==0){
            return 0;
        }
        
        for (int r =0;r<s.size();r++){
            while(charSet.find(s[r]) != charSet.end()){
                charSet.erase(s[l]);
                l++;
                ctr--;
            }
            if(charSet.find(s[r]) == charSet.end()){
                charSet.insert(s[r]);
                ctr++;
                if(ctr>longest) longest = ctr;
            }
        }  


        return longest;
    }
};
