class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> dict;
        int n = nums.size();
        for(int i =0;i<n;i++){
            dict[nums[i]]++;

            if(dict[nums[i]]==2){
                return true;
            }        
        }

        return false;    
    }
};