class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> pre;
        pre[0] = 1;
        int res = 0, curSum = 0;
        for(int num : nums){
            curSum += num;
            int diff = curSum - k;
            res+= pre[diff];
            pre[curSum]++;
        }

        return res;
    }
};