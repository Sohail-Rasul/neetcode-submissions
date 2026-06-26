class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l =0;
        int res =0;
        int prod =1;

        if(k==0 || k==1){
            return res;
        }

        for(int r =0; r<nums.size();r++){
            prod = prod*nums[r];

           while(prod >= k){
            prod = prod/nums[l];
            l++;
           }

           res+= (r-l+1); 
        }

        return res;
    }
};