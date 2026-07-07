class Solution {
public:
    int search(vector<int>& nums, int target) {
        int first = 0;
        int last = nums.size()-1;
        int mid = (first + last)/2;

        while(first <= last){
            if(nums[mid] < target){
                first = mid+1;
                mid = (first + last)/2;
                continue;
            }
            else if(nums[mid] > target){
                last = mid-1;
                mid = (first + last)/2;
                continue;
            }
            else{
                return mid;
            }

        }

        return -1;

    }
};
