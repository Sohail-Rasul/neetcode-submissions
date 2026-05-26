class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int len = nums.size();
        int count=0;
        for (int i =0;i<len;i++){
            if(nums[i]==val){
                nums[i]=101;
                count++;
            }
        }

        for(int i=1;i<len;i++){
            for (int j=1;j<len-i+1;j++){
                if(nums[j-1]>nums[j]){
                    int temp = nums[j];
                    nums[j]=nums[j-1];
                    nums[j-1] = temp;
                }
            }
        }

        return len-count;
    }
};