class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int read=0; //Finds Non Zero Elements
        int write=0; // Position where we replace

        while(read<nums.size()){
            if(nums[read]==0){
                read++;
                continue;
            }
            else{
                swap(nums[write],nums[read]);
                read++;
                write++;
                continue;
            }
        }

    }
};