class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int req = nums.size()/2;
        unordered_map<int,int> dict;
        for(int i = 0;i<nums.size();i++){
            dict[nums[i]]++;
            if(dict[nums[i]]>req){
                return nums[i];
            }
        }
    }
};