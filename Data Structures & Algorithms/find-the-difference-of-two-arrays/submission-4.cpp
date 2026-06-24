class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> dict1;
        unordered_set<int> dict2;
        vector<vector<int>> ans;
        vector<int> diff1;
        vector<int> diff2;

        for(int n : nums1){
            dict1.insert(n);
        }
        for(int n : nums2){
            dict2.insert(n);
        }
        for(int n : dict2){
            if(dict1.find(n) == dict1.end()){
                diff2.push_back(n);
            }
        }

        for(int n : dict1){
            if(dict2.find(n) == dict2.end()){
                diff1.push_back(n);
            }
        }

        ans.push_back(diff1);
        ans.push_back(diff2);

        return ans;




    }
};