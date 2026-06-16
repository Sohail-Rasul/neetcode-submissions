class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        int prod = 1;
        bool is_zero = false;
        bool mult_zero = false;
        int zctr=0;
        for (int num : nums){
            if(num == 0){
                is_zero = true;
                zctr++;
                if(zctr>1){
                    mult_zero = true;
                }
                continue;
            }
            prod = prod*num;
        }

        for(int num: nums){
            int val;
            if(num!=0){
                if(is_zero){
                    output.push_back(0);
                }
                else{    
                    output.push_back(prod/num);
                }
            }
            else{
                if(!mult_zero){
                    output.push_back(prod);
                }
                else{
                    output.push_back(0);
                }
            }
        }

        return output;
    }
};
