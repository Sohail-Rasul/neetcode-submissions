class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l =0;
        int r =0;
        int longest =0;
        int ctr=0;

        unordered_set<char> charSet;

        while(r<s.size()){
            if(charSet.find(s[r]) == charSet.end()){
                cout << "Inserting: " <<s[r]<<"\n";
                charSet.insert(s[r]);
                ctr++;
                r++;

                if(r==s.size()){
                    return max(ctr,longest);
                }
                continue;
            }
            else{
                cout <<"Duplicate Found: " << s[r] << "\n";
                while(s[l]!=s[r]){
                    l++;
                }
                l++;
                r=l;
                cout <<"New Starting Character: " << s[r] << "\n";
                cout << "At Position: " << r << "\n";
                charSet.clear();
                if(ctr>longest){
                    longest = ctr;
                    cout << "New Longest: " << longest <<"\n";
                }
                ctr=0;
                continue;
            }
        }

        return longest;
    }
};
