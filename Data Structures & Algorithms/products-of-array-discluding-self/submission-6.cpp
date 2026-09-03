class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size(),0);
        vector<int> suf(nums.size(),0);
        vector<int> res(nums.size(),0);
        int size = nums.size();
        
        pre[0] = 1;
        suf[size-1] = 1;
        
        int prod = nums[0];
        for(int i =1;i<nums.size();i++){
            pre[i] = prod;
            prod *= nums[i];
        }
        
        prod = nums[nums.size()-1];
        for(int i = nums.size()-2;i>=0;i--){
            suf[i] = prod;
            prod *= nums[i];
        }

        for(int i=0;i<nums.size();i++){
            res[i] = pre[i]*suf[i];
        }

        return res;
    }
};
