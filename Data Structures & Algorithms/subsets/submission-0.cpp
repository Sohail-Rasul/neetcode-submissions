class Solution {
public:
    vector<vector<int>> res;
    void dfs(vector<int>& nums, vector<int> numArr, int start) {
        res.push_back(numArr);

        for (int i = start; i < nums.size(); i++) {
            numArr.push_back(nums[i]);

            dfs(nums, numArr, i + 1);

            numArr.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> numArr;
        dfs(nums,numArr,0);
        return res;
    }
};
