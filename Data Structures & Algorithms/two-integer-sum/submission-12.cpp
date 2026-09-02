class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> dict;
        vector<int> res;
        for(int i =0;i<nums.size();i++){
            dict[nums[i]] = i;
        }

        for(int i =0;i<nums.size();i++){
            int rem = target - nums[i];
            if(dict.count(rem) && dict[rem] != i){
                res.push_back(i);
                res.push_back(dict[rem]);
                break;
            }
        }
        return res;
    }
};
