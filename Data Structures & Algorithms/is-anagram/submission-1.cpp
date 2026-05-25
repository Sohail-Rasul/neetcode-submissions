class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> string1;
        unordered_map<char,int> string2;

        for(char i : s){
            string1[i]+=1;
        }
        for(char j : t){
            string2[j]+=1;
        }

        for(char x : s){
            if(string2[x]==0){
                return false;
            }

            else if(string2[x]!=string1[x]){
                return false;
            }
        }

        for(char y : t){
            if(string1[y]==0){
                return false;
            }

            else if(string2[y]!=string1[y]){
                return false;
            }
        }

        return true;
    }
};
