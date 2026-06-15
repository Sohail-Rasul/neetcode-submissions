class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> dict;
        vector<vector<string>> ans;

        for(string s : strs){
            string copy = s;
            sort(copy.begin(),copy.end());

            dict[copy].push_back(s);
        }
        for(auto pair : dict){
            ans.push_back(pair.second);
        }

        return ans;        
    }
};
