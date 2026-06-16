class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int ctr = 0;
        int temp_ctr=1;
        int max = 1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == (nums[i+1]-1) || nums[i] == nums[i+1] ){
                    if(nums[i] == nums[i+1]){
                        continue;
                    }
                    temp_ctr++;
                    if(temp_ctr>max){
                        max = temp_ctr;
                    }
            }
            else{
                temp_ctr=1;
            }
        }

        return max;
    }
};
