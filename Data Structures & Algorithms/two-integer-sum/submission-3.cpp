class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> dict;
        vector<int> ans;

        for(int i = 0;i<nums.size();i++){
            int difference = target - nums[i];
            if (dict.find(difference) != dict.end()){
                ans.push_back(dict[difference]);
                ans.push_back(i);

                return ans;
            }
            else{
                dict[nums[i]] =i; 
            }

        }

        return ans;
        
    }
};
