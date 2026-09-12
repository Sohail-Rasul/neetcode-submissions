class Solution {
public:
    vector<vector<int>> res;

    void dfs(vector<int> nums, vector<int> arr, int start){
        res.push_back(arr);

        for(int i = start;i<nums.size();i++){
            
            if(i>start && nums[i]==nums[i-1]) continue;

            arr.push_back(nums[i]);

            dfs(nums,arr,i+1);

            arr.pop_back();
        }

        return;
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> arr;
        sort(nums.begin(),nums.end());
        dfs(nums,arr,0);
        return res;
    }
};
