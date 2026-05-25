class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        vector<int> ans(2);

        for(int i =0;i<len;i++){
            for(int j = i+1;j<len;j++){
                if (nums[i]+nums[j]==target && i!=j){
                    ans[0]=i;
                    ans[1]=j;

                    return ans;
                }
            }
        }

        return ans;
    }
};
