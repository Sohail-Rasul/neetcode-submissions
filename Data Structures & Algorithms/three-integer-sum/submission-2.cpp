class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int moves = 0;
        for(int i =0;i<nums.size()-1;i++){
            int l = i+1;
            int r = nums.size()-1;
            while(l<r){
                vector<int> arr;
                if(nums[l]+nums[r] + nums[i] < 0){
                    l++;
                }
                else if(nums[l]+nums[r] +nums[i] > 0){
                    r--;
                }
                else{
                    arr.push_back(nums[i]);
                    arr.push_back(nums[l]);
                    arr.push_back(nums[r]);

                    if(find(ans.begin(),ans.end(),arr) == ans.end())
                        ans.push_back(arr);
                    l++;
                }
            }
            
        }

        return ans;
    }
};
