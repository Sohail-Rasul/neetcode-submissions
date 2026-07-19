class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> res(size);
        vector<int> prefix(size,1);
        vector<int> suffix(size,1);

        //Prefix
        for(int i = 1;i<size;i++){
            prefix[i] = prefix[i-1]*nums[i-1];
        }

        //Suffix
        for(int i = size-1;i>0;i--){
            suffix[i-1] = suffix[i] * nums[i];
        }

        //Calc and push
        for(int i =0;i<size;i++){
            res[i] = (prefix[i]*suffix[i]);
        }

        return res;
    }
};
