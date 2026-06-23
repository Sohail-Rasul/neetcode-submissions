class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> dict;

        for(int i = 0;i<nums.size();i++){
            dict[nums[i]] = i;
        }

        for(int i=0;i<nums.size();i++){
            int key = target - nums[i];
        if(dict.find(key) != dict.end() && dict[key] != i){
                ans.push_back(i);
                ans.push_back(dict[key]);
                break;
            }
        }

        return ans;;
        
    }
};
