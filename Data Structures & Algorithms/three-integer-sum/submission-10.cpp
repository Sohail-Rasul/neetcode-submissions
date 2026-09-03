class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());

        for(int i =0;i<nums.size()-1;i++){
            int first = nums[i];
            int l = i+1;
            int r = nums.size()-1;

            while(l<r){
                int sum = first + nums[l] + nums[r];
                
                if(sum > 0) r--;
                else if(sum <0) l++;
                else{
                    vector<int> triplet;
                    triplet.push_back(first);
                    triplet.push_back(nums[l]);
                    triplet.push_back(nums[r]);
                    if(find(res.begin(),res.end(),triplet) == res.end()) res.push_back(triplet);
                    l++;
                }
            }
        }

        return res;
    }
};
