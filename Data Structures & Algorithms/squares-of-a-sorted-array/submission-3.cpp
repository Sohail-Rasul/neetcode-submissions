class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        
        int l=0;
        int r=nums.size()-1;

        while(l<=r){
            int l_sq = nums[l]*nums[l];
            int r_sq = nums[r]*nums[r];

            if(l_sq<=r_sq){
                ans.push_back(r_sq);
                r--;
            }
            else{
                ans.push_back(l_sq);
                l++;
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};