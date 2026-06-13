class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> dict;

        for(int n : nums){
            dict[n]++;
            if (dict[n]>1){
                return true;
            }
        }

        return false;
    }
};