class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size(),1);
        vector<int> suf(nums.size(),1);
        vector<int> res(nums.size(),1);
        int size = nums.size();
        
        int prod = nums[0];
        for(int i =1;i<nums.size();i++){
            pre[i] = pre[i-1]*nums[i-1];
        }
        
        for(int i = size-1;i>0;i--){
            suf[i-1] = suf[i]*nums[i];
        }

        for(int i=0;i<nums.size();i++){
            res[i] = pre[i]*suf[i];
        }

        return res;
    }
};
