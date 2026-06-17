class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ct = 1;
        int cur = 1;
        int ctr=1;

        while(cur<nums.size()){
            if(nums[cur] == nums[cur-1]){
                cur++;
            }
            else{
                nums[ct] = nums[cur];
                ctr++;
                ct++;
                cur++;
            }
        }

        return ctr;
    }
};