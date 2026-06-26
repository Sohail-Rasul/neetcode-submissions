class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l =0;
        int minSize=0;
        int sum =0;

        for(int r =0;r<nums.size();r++){
            sum += nums[r];

            while(sum >= target){
                if(minSize==0) minSize = r-l+1;
                else minSize = min(minSize, r-l+1);

                sum-=nums[l];
                l++;
            }
        }

        return minSize;
    }
};