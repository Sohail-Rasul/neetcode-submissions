class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        

        while(l<r){
            int mid = l + (r-l)/2;
            if(nums[mid] > nums[r]){
                l = mid+1;
            }
            else{
                r = mid;
            }
        }

        int first = 0;
        int last = l-1;

        while(first<=last){
            int mid = first + (last-first)/2;

            if(nums[mid] < target){
                first = mid+1;
            }
            else if(nums[mid] > target){
                last = mid-1;
            }
            else return mid;
        }

        first = l;
        last = nums.size()-1;

        while(first<=last){
            int mid = first + (last-first)/2;

            if(nums[mid] < target){
                first = mid+1;
            }
            else if(nums[mid] > target){
                last = mid-1;
            }
            else return mid;
        }

        return -1;
    }
};
