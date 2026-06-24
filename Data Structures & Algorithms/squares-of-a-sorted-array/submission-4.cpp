class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        if(nums.size()==0){
            return ans;
        }
        int l =0;
        int r =nums.size()-1;
        for (int i =nums.size()-1;i>=0;i--){
            if(pow(nums[r],2) >= pow(nums[l],2)){
                ans[i]=pow(nums[r],2);
                r--;
                continue;
            }
            else{
                ans[i]=pow(nums[l],2);
                l++;
                continue;
            }
        }

        return ans;
    }
};