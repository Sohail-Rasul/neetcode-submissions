class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l =0;
        int r = nums.size()-1;

        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[l] > target){
                return l;
            }
            else if(nums[r] < target){
                return ++r;
            }
            else if(nums[mid] < target){
                l = mid+1;
                continue;
            }
            else if(nums[mid] > target){
                r = mid-1;
                continue;
            }
            else return mid;
        }
        return -1;
    }
};