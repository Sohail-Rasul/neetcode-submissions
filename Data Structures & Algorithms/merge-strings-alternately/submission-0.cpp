class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int len1=word1.size();
        int len2=word2.size();
        int max;
        string ans;

        if(len1>len2) max =len1;
        else max = len2;

        for ( int i =0 ;i<max;i++){
            if(i<len1){
                ans= ans+word1[i];
            }
            if(i<len2){
                ans=ans+word2[i];
            }
        }

        return ans;
    }
};