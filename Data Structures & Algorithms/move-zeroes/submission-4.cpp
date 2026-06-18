class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int r = 0;
        int l = 0;

        while(r<nums.size()){
            if(nums[r]!=0){
                swap(nums[r],nums[l]);
                r++;
                l++;
            }
            else{
                r++;
            }
        }
        
    }
};