class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> og;
        unordered_map<char,int> perm;

        int l =0;
        int r = s1.size()-1;

        for(char c : s1){
            og[c]++;
            cout << "Adding to OG: " << c << " : " << og[c] << "\n";
        }

        for (int i =0;i<s1.size();i++){
            perm[s2[i]]++;

            cout << "Adding to Initial Perm: " << s2[i] << " : " << perm[s2[i]] << "\n";
        }

        while(r<s2.size()){
            if(perm == og){
                return true;
            }
            cout << "Not matching \n";
            cout << "Reducing: " << s2[l];
            if(perm[s2[l]] > 1){
                perm[s2[l]]--;
            }else{
                perm.erase(s2[l]);
            }
            l++;
            r++;
            perm[s2[r]]++;
            cout << "  Adding: " <<s2[r] <<" \n\n";
        }

        return false;
    }
};
