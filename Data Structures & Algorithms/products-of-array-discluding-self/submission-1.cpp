class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> prefix(len,1);
        vector<int> suffix(len,1);
        vector<int> ans(len);

        for(int i = 1;i<len;i++){
            prefix[i] = prefix[i-1] * nums[i-1];
        }

        for(int i = len-1;i>0;i--){
            suffix[i-1] = suffix[i]*nums[i];
        }

        for( int i =0;i<len;i++){
            ans[i] = prefix[i] * suffix[i];
        }

        return ans;
    }
};
