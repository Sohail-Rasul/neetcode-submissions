class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ctr=0;
        int max = 0;
        for(int i : nums){
            if(i==1){
                ctr++;
                if(ctr>max) max = ctr;
            }
            else{
                ctr=0;
            }
        }

        return max;
    }
};