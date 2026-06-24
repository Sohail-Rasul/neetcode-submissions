class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int counter=1;
        int replace=1;
        int findNew=1;

        while(findNew<nums.size()){
            if(nums[findNew]==nums[findNew-1]){
                findNew++;
            }
            else{
                nums[replace] = nums[findNew];
                replace++;
                findNew++;
                counter++;
            }
        }

        return counter;
    }
};