class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
        int k = 0;
        string out="";
        bool test = false;

        int min_len=100;
        int min_indx = 0;
        int indx=0;
        for(string s : strs){
            if(s.length()<min_len){
                min_len = s.length();
                min_indx=indx;
            }

            indx++;
        }
        for(int i=0;i<min_len;i++){
            char chck=strs[min_indx][k];
            for(auto s : strs){
                if(s[k]!=chck){
                    return out;
                }
                else{
                    test = true;
                }
            }
            if(test){
                out+=chck;
            }
            test=false;
            k++;  
        }


        return out;
    }
};