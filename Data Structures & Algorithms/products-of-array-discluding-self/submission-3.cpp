class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int prev=1;
        int currIdx = 0;
        int prod = 1;
        int i =0;
        while(i <nums.size()){
            if(i!=currIdx) prod = prod*nums[i];
            
            if(i == nums.size()-1){
                i = currIdx+1;
                currIdx++;
                res.push_back(prod*prev);
                prev = prev*nums[i-1];
                prod = 1;
                continue;
            }
            i++;
        }
        return res;
    }
};
