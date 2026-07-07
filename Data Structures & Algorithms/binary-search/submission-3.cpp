class Solution {
public:
    int search(vector<int>& nums, int target) {
        int first = 0;
        int last = nums.size()-1;
        int mid = (first + last)/2;

        if(nums.size()==1){
            if(nums[0] == target) return 0;
            else return -1;
        }

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
            else if(nums[last] == target){

            }
            else{
                return mid;
            }

        }

        return -1;

    }
};
