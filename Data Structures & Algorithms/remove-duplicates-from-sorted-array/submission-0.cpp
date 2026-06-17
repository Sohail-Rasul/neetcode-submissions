class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> ans_set;
        vector<int> ans_vector;

        for(int n: nums){
            if(ans_set.find(n) == ans_set.end()){
                ans_set.insert(n);
                ans_vector.push_back(n);
            }
        }

        nums = ans_vector;

        int ans = nums.size();
        return ans;
                
    }
};