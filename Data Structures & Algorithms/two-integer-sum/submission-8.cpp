class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> dict;
        vector<int> res;

        for(int i =0;i<nums.size();i++){
            int key = target-nums[i];
            if(dict.find(key) !=  dict.end() && dict[key]!=i){
                res.push_back(min(i,dict[key]));
                res.push_back(max(i,dict[key]));
                break;
            }
            else{
                dict[nums[i]] = i;
            }
        }

        return res;
    }
};
