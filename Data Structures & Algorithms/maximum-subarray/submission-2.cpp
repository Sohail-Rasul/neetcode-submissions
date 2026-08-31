class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = -10001;
        int next = -10001;

        for(int i =0;i<nums.size();i++){
            next = max(next+nums[i],nums[i]);
            sum = max(sum,next);
        }

        return sum;
    }
};
