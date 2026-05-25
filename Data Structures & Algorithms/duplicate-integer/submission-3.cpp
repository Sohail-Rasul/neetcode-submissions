class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> checkDict;
        for (int i : nums){
            if(checkDict[i]==0){
                checkDict[i]+=1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};