class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int l = 0;
        int r = 1;

        int res = 0;
        int sum = nums[l];

        for(int i=0;i<nums.size();i++){
            if(nums[i]==k) {
                res++;
                cout << "Single Count Inc" <<"\n";
            }
        }

        while(l<r){
            for(int i = r;i<nums.size();i++){
                sum = sum + nums[i];
                if(sum==k) {
                    res++;
                }
            }

            l++;
            r=l+1;
            if(l<nums.size()) sum = nums[l];
            else break;
        }

        return res;
    }
};