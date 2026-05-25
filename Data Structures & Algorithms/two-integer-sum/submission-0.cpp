class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = nums.size();
        vector<int> out;
        for(int i =0;i<length;i++){
            int rem = target - nums[i];
            for(int j=i+1;j<length;j++){
                if (nums[j]==rem){
                    out.push_back(i);
                    out.push_back(j);
                    return out;
                }
            }
        }
        return out;
    }
};
